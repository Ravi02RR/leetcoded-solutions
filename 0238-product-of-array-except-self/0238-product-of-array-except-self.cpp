class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        
        vector<int> pref(n);
        int prefPro = 1;
        for (int i = 0; i < n; i++) {
            pref[i] = prefPro;
            prefPro *= nums[i];
        }

        
        vector<int> suf(n);
        int sufPro = 1;
        for (int i = n - 1; i >= 0; i--) {
            suf[i] = sufPro;
            sufPro *= nums[i];
        }

        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            result[i] = pref[i] * suf[i];
        }

        return result;
    }
};
