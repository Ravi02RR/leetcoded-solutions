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
    void helper(TreeNode* root, int sum,vector<vector<int>>& ans,vector<int> v){
        std::ios_base::sync_with_stdio(false);
        cin.tie();
            if(root==nullptr) return;
            if(root->left==nullptr && root->right==nullptr){
               if(root->val==sum){
                 v.push_back(root->val);
                ans.push_back(v);
                return;
               }
            }
            v.push_back(root->val);
            helper(root->left,sum-(root->val),ans,v);
            helper(root->right,sum-(root->val),ans,v);
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        std::ios_base::sync_with_stdio(false);
        cin.tie();
        vector<vector<int>> ans;
        vector<int>v;
        helper(root,targetSum,ans,v);
        return ans;
    }
};