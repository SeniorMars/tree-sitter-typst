#include <check.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

// Include the actual header to test the real function
#include "src/tree_sitter/array.h"

// We need to access the static inline function, so we'll include the header
// and test through a wrapper that uses the same memory layout
typedef struct {
    void* contents;
    uint32_t size;
    uint32_t capacity;
} Array;

START_TEST(test_array_erase_bounds_invariant)
{
    // Invariant: array_erase must never perform out-of-bounds memory operations
    // regardless of build configuration (debug/release)
    
    // Test payloads: index values relative to array size
    struct {
        uint32_t initial_size;
        uint32_t erase_index;
        const char* description;
    } test_cases[] = {
        {5, 5, "exact exploit case - index equals size (out of bounds)"},
        {5, 0, "valid boundary - first element"},
        {5, 4, "valid boundary - last element"},
        {5, 2, "valid case - middle element"},
        {0, 0, "boundary case - empty array, index 0"}
    };
    
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_cases; i++) {
        uint32_t initial_size = test_cases[i].initial_size;
        uint32_t erase_index = test_cases[i].erase_index;
        
        // Create test array with proper memory allocation
        size_t element_size = sizeof(uint32_t);
        uint32_t capacity = initial_size + 2; // Extra capacity for safety
        
        // Allocate and initialize array contents
        char* contents = malloc(capacity * element_size);
        uint32_t* size_ptr = malloc(sizeof(uint32_t));
        *size_ptr = initial_size;
        
        // Initialize array with known values
        for (uint32_t j = 0; j < initial_size; j++) {
            uint32_t* elem = (uint32_t*)(contents + j * element_size);
            *elem = j * 100; // Distinct values
        }
        
        // Initialize guard bytes after the array
        if (initial_size < capacity) {
            uint32_t* guard = (uint32_t*)(contents + initial_size * element_size);
            *guard = 0xDEADBEEF;
        }
        
        // Capture initial state
        uint32_t original_size = *size_ptr;
        uint32_t guard_value = 0;
        if (initial_size < capacity) {
            guard_value = *(uint32_t*)(contents + initial_size * element_size);
        }
        
        // Call the actual function under test
        _array__erase(contents, size_ptr, element_size, erase_index);
        
        // Security property: memory outside valid bounds must remain unchanged
        if (initial_size < capacity) {
            uint32_t new_guard = *(uint32_t*)(contents + initial_size * element_size);
            ck_assert_msg(guard_value == new_guard, 
                         "Guard byte corrupted! Test case: %s", 
                         test_cases[i].description);
        }
        
        // Additional invariant: size should only decrease by 1 if index was valid
        if (erase_index < original_size) {
            ck_assert_msg(*size_ptr == original_size - 1,
                         "Size not properly decremented for valid erase");
        }
        
        free(contents);
        free(size_ptr);
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