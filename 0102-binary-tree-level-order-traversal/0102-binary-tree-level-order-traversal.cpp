class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (root == nullptr) {
            return result;
        }

        vector<TreeNode*> current;
        current.push_back(root);

        while (!current.empty()) {
            vector<TreeNode*> next;
            vector<int> values;

            for (TreeNode* node : current) {
                values.push_back(node->val);
                if (node->left != nullptr) {
                    next.push_back(node->left);
                }
                if (node->right != nullptr) {
                    next.push_back(node->right);
                }
            }

            result.push_back(values);
            current = next;
        }

        return result;
    }
};