/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int sum(TreeNode* root, int temp) {
        if (root == nullptr) return temp;
        int right_sum = sum(root->right, temp);
        root->val += right_sum;
        int left_sum = sum(root->left, root->val); 
        return left_sum;
    }

public:
    TreeNode* bstToGst(TreeNode* root) {
        if (root == nullptr) return root;
        sum(root, 0); 
        return root;
    }
};
