class Solution {
public:
    TreeNode* find(TreeNode* root, int start) {
        if (root == nullptr) return nullptr;
        if (root->val == start) return root;
        TreeNode* left = find(root->left, start);
        if (left != nullptr) return left;
        return find(root->right, start);
    }

    void markparent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent) {
        if (root == nullptr) return;
        if (root->left) parent[root->left] = root;
        if (root->right) parent[root->right] = root;
        markparent(root->left, parent);
        markparent(root->right, parent);
    }

    int amountOfTime(TreeNode* root, int start) {
        TreeNode* first = find(root, start);
        unordered_map<TreeNode*, TreeNode*> parent;
        markparent(root, parent);
        unordered_set<TreeNode*> isInfected;
        isInfected.insert(first);
        queue<pair<TreeNode*, int>> q;
        q.push({first, 0});
        int maxi = 0;

        while (!q.empty()) {
            pair<TreeNode*, int> p = q.front();
            q.pop();
            int level = p.second;
            TreeNode* temp = p.first;
            maxi = max(maxi, level);

            if (temp->left) {
                if (isInfected.find(temp->left) == isInfected.end()) {
                    q.push({temp->left, level + 1});
                    isInfected.insert(temp->left);
                }
            }
            if (temp->right) {
                if (isInfected.find(temp->right) == isInfected.end()) {
                    q.push({temp->right, level + 1});
                    isInfected.insert(temp->right);
                }
            }
            if (parent.find(temp) != parent.end()) {
                if (isInfected.find(parent[temp]) == isInfected.end()) {
                    q.push({parent[temp], level + 1});
                    isInfected.insert(parent[temp]);
                }
            }
        }
        return maxi;
    }
};
