export const SYNTAX_ISSUE_NODE_TYPES = new Set([
  "incomplete_let_binding",
  "incomplete_module_import",
  "incomplete_module_include",
  "incomplete_return_expression",
  "incomplete_set_rule",
  "incomplete_show_rule",
  "malformed_automatic_link",
  "malformed_embedded_code",
  "malformed_escape",
  "malformed_number",
]);

export function isSyntaxIssueNode(node) {
  return SYNTAX_ISSUE_NODE_TYPES.has(node.type);
}

export function treeHasSyntaxIssue(root) {
  if (root.hasError) return true;

  const pending = [root];
  while (pending.length > 0) {
    const node = pending.pop();
    if (isSyntaxIssueNode(node)) return true;
    for (let i = 0; i < node.namedChildCount; i += 1) {
      const child = node.namedChild(i);
      if (child) pending.push(child);
    }
  }
  return false;
}
