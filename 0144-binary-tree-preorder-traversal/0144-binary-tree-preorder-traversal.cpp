class Solution {
    void helper(vector<int>& ans, TreeNode* root) {
        if (root == nullptr) return;
        ans.push_back(root->val);

        helper(ans, root->left);
        helper(ans, root->right);
    }
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(ans, root);
        return ans;
    }
};
