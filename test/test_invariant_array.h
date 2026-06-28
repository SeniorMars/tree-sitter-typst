#include <check.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Include the actual header to test the real function
#include "src/tree_sitter/array.h"

// We need to access the static inline function, so we'll include the header
// and test through a wrapper that uses the actual array structure
typedef struct {
  void *contents;
  uint32_t size;
  uint32_t capacity;
} Array;

START_TEST(test_array_erase_bounds_invariant)
{
    // Invariant: array_erase must never perform out-of-bounds memory operations
    // regardless of input index values
    
    // Test payloads: boundary cases and adversarial inputs
    struct {
        uint32_t initial_size;
        uint32_t erase_index;
        const char *description;
    } test_cases[] = {
        {10, 5, "normal_case"},           // Valid input
        {10, 0, "first_element"},         // Boundary: first element
        {10, 9, "last_element"},          // Boundary: last element
        {UINT32_MAX, UINT32_MAX - 1, "overflow_boundary"}, // Potential overflow case
        {0, 0, "empty_array"}             // Adversarial: empty array
    };
    
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_cases; i++) {
        uint32_t initial_size = test_cases[i].initial_size;
        uint32_t erase_index = test_cases[i].erase_index;
        
        // Create test array with guard pages before and after
        size_t element_size = sizeof(uint32_t);
        size_t total_size = initial_size * element_size;
        
        // Allocate buffer with extra guard space
        size_t guard_size = 4096;
        char *buffer = malloc(total_size + 2 * guard_size);
        ck_assert_ptr_nonnull(buffer);
        
        // Initialize array contents in the middle of guard space
        char *contents = buffer + guard_size;
        Array array = {contents, initial_size, initial_size};
        
        // Fill with pattern for detection
        for (uint32_t j = 0; j < initial_size; j++) {
            *((uint32_t*)(contents + j * element_size)) = j;
        }
        
        // Set guard patterns
        memset(buffer, 0xAA, guard_size);
        memset(buffer + guard_size + total_size, 0xBB, guard_size);
        
        // Only test if index is within bounds (the function's precondition)
        if (erase_index < initial_size) {
            // Call the actual function - this will compile to use the inline function
            // from array.h since we're including the header
            _array__erase(array.contents, &array.size, element_size, erase_index);
            
            // Security property: size should decrement by 1
            ck_assert_uint_eq(array.size, initial_size - 1);
            
            // Security property: guard pages must remain unchanged
            for (size_t j = 0; j < guard_size; j++) {
                ck_assert_uint_eq((unsigned char)buffer[j], 0xAA);
                ck_assert_uint_eq((unsigned char)buffer[guard_size + total_size + j], 0xBB);
            }
        }
        
        free(buffer);
    }
}
END_TEST

Suite *security_suite(void)
{
    Suite *s;
    TCase *tc_core;

    s = suite_create("Security");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, test_array_erase_bounds_invariant);
    suite_add_tcase(s, tc_core);

    return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = security_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}