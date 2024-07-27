class Solution {
public:
    int maxSatisfaction(vector<int>& v) {
        int n = v.size();
        sort(v.begin(), v.end());
        vector<int> suf(n);
        suf[n-1] = v[n-1];
        for (int i = n-2; i >= 0; i--) {
            suf[i] = v[i] + suf[i + 1];
        }

        int ans = 0;
        int temp = 1;
        int j = 0;
        while (j < n && suf[j] < 0) {
            j++;
        }

        for (int i = j; i < n; i++) {
            ans += v[i] * temp;
            temp++;
        }
        return ans;
    }
};
