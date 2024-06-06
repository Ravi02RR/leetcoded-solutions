class Solution {
    void helper(priority_queue<int> &pq, TreeNode* root, int k) {
        if (root == nullptr) return;
        helper(pq, root->left, k);
        pq.push(root->val);
        if (pq.size() > k) pq.pop();
        helper(pq, root->right, k);
        
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;
        helper(pq, root, k);
        return pq.top();
    }
};
