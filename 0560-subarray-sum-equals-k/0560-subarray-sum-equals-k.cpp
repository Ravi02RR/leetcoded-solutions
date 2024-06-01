class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        
        vector<int> pref(n + 1, 0); 
        
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            pref[i + 1] = sum;
        }
        
        unordered_map<int, int> mp;
        int count = 0;

        for (int i = 0; i < pref.size(); i++) {
            if (mp.find(pref[i] - k) != mp.end()) {
                count += mp[pref[i] - k];  
            }
            mp[pref[i]]++;
        }
        
        return count;
    }
};
