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
    int level(TreeNode* root){
        if(root==nullptr) return 0;
        int leftt = level(root->left);
        int rightt = level(root->right);
        return max(leftt,rightt) + 1;
    }


    void nthLevelr(TreeNode* root, int n, int curr, vector<int>& temp){
        if(root == nullptr) return;
        if(curr == n){
            temp.push_back(root->val);
            return;
        }
        if (n % 2 == 0) { 
            nthLevelr(root->right, n, curr + 1, temp);
            nthLevelr(root->left, n, curr + 1, temp);
        } else { 
            nthLevelr(root->left, n, curr + 1, temp);
            nthLevelr(root->right, n, curr + 1, temp);
        }
    }

public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        int h = level(root);
        for(int i = 1; i <= h; i++){
            vector<int> temp;
            nthLevelr(root, i, 1, temp);
            ans.push_back(temp);
        }
        return ans;
    }
};
