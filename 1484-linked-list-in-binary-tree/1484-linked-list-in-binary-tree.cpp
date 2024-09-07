class Solution {
public:
bool helper(ListNode* head, ListNode* cur, TreeNode* root) {
        if (cur == nullptr) return true;  
        if (root == nullptr) return false; 
        
        if (cur->val == root->val) {
            cur = cur->next;  
        } else if (head->val == root->val) {
            head = head->next;
        } else {
            cur = head;  
        }
        
        return helper(head, cur, root->left) || helper(head, cur, root->right); 
    }
    bool isSubPath(ListNode* head, TreeNode* root) {
        return helper(head, head, root);
    }
    
    
};