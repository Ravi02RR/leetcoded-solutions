class Solution {
public:
    int length(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp) {
            temp = temp->next;
            count++;
        }
        return count;
    }

    ListNode* reverse(ListNode* head, ListNode* tail) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != tail) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    ListNode* findHead(ListNode* head, int idx) {
        ListNode* temp = head;
        while (idx--) {
            temp = temp->next;
        }
        return temp;
    }

    ListNode* findTail(ListNode* head, int idx) {
        ListNode* temp = head;
        while (idx-- && temp) {
            temp = temp->next;
        }
        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        std::ios_base::sync_with_stdio(false);
        int len = length(head);
        if (len < k) return head; 
        
        int count = len / k;
        ListNode* dummy = new ListNode();
        ListNode* curr = dummy;
        ListNode* prevHead = head; 

        for (int i = 0; i < count; i++) {
            ListNode* groupHead = findHead(prevHead, 0); 
            ListNode* tail = findTail(groupHead, k - 1);  
            
            ListNode* nextGroupHead = tail->next;  
            curr->next = reverse(groupHead, tail->next); 
            curr = groupHead; 
            
            prevHead = nextGroupHead; 
        }

        
        curr->next = prevHead;

        return dummy->next;
    }
};
