class Solution {
private:
    int getLen(ListNode* head) {
        ios_base::sync_with_stdio(false);
        ListNode* temp = head;
        int size = 0;
        while (temp) {
            temp = temp->next;
            size++;
        }
        return size;
    }

public:

    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        int n = getLen(head);
        int size = n / k;
        int rem = n % k;
        vector<ListNode*> ans;
        ListNode* temp = head;
        
        for (int i = 0; i < k; i++) {
            ListNode* C = new ListNode(0);
            ListNode* tempC = C;
            int s = size ;
            if(rem>0)s++;
            rem--;
            
            for (int j = 0; j < s; j++) {
                if (temp) {
                    tempC->next = temp;
                    temp = temp->next;
                    tempC = tempC->next;
                }
            }
            
            tempC->next = nullptr;
            ans.push_back(C->next);
        }

        return ans;
    }
};