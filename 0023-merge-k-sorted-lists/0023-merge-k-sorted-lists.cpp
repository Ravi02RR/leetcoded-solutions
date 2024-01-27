class Solution {
private:
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        ListNode* c = new ListNode(0);
        ListNode* temp = c;

        while (a != nullptr && b != nullptr) {
            if (a->val <= b->val) {
                temp->next = a;
                temp = temp->next;
                a = a->next;
            } else {
                temp->next = b;
                temp = temp->next;
                b = b->next;
            }
        }

        if (a == nullptr) {
            temp->next = b;
        } else {
            temp->next = a;
        }

        return c->next;
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& nums) {
        
        if ( nums.size() == 0) return nullptr;

        while (nums.size() > 1) {
            ListNode* a = nums[0];    //.back();
            // nums.pop_back();
            nums.erase(nums.begin());
            ListNode* b = nums[0];         //.back();
            // nums.pop_back();
            nums.erase(nums.begin());
          
            ListNode* c = mergeTwoLists(a, b);
            nums.push_back(c);
            
        }

        return nums[0];
    }
};
