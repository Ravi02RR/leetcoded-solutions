class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>ans(nums.size());
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp+=nums[i];
            ans[i]=temp;
        }

        return ans;

    }
};