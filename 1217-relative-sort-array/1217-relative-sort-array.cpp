class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        vector<int> ans;
        for (int ele : arr1) {
            mp[ele]++;
        }
        for (int i = 0; i < arr2.size(); i++) {
                while (mp[arr2[i]] > 0) {
                    ans.push_back(arr2[i]);
                    mp[arr2[i]]--;
                }
                mp.erase(arr2[i]);
            
        }
        for (auto ele : mp) {
            while (ele.second > 0) {
                ans.push_back(ele.first);
                ele.second--;
            }
        }

        return ans;
    }
};
