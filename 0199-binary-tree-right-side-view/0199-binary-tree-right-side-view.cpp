class Solution {
public:
    void traverse(TreeNode* root, int level, vector<int>& ans) {
      if(root==nullptr)return;
      if(level==ans.size()){
        ans.push_back(root->val);

      }
      traverse(root->right,level+1,ans);
      traverse(root->left,level+1,ans);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        traverse(root, 0, ans);
        return ans;
    }
};