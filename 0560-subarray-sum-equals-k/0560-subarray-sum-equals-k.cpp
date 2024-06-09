class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> pref(n, 0);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            pref[i] = sum;
        }
        int count = 0;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            if (pref[i] == k) count++;
            int rem = pref[i] - k;
            if (mp.find(rem) != mp.end()) {
                count += mp[rem];
            }
            mp[pref[i]]++;
        }
        return count;
    }
};
