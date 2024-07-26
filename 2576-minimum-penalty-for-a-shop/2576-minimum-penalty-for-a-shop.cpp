class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.length();
        
        vector<int> pre(n+1, 0); // No of N before kth hour
        vector<int> suf(n+1, 0); // No of Y after and including hours

        for (int i = 0; i < n; i++) {
            pre[i+1] = pre[i] + ((customers[i] == 'N') ? 1 : 0);
        }

        for (int i = n-1; i >= 0; i--) {
            suf[i] = suf[i+1] + ((customers[i] == 'Y') ? 1 : 0); 
        }

        vector<int> total(n+1, 0);
        for (int i = 0; i <= n; i++) { 
            total[i] = pre[i] + suf[i]; 
        }

        auto minIt = min_element(total.begin(), total.end()); 
        return distance(total.begin(), minIt); 
    }
};
