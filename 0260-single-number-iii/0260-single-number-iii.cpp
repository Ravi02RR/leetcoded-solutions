class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                mp.erase(nums[i]);
            }else mp[nums[i]]++;
        }
        for(auto ele :mp){
            ans.push_back(ele.first);
        }

        return ans;
    }
};