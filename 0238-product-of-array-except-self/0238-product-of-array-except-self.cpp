class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>pre(nums.size());
        int temp=1;
        for(int i=0;i<nums.size();i++){
        
            pre[i]=temp;
            temp*=nums[i];
        }
        int n=nums.size();
        vector<int>suf(nums.size());
        temp=1;
        for(int i=n-1;i>=0;i--){
            suf[i]=temp;
            temp*=nums[i];
        }

        vector<int>ans(nums.size());
        for(int i=0;i<n;i++){
            ans[i]=suf[i]*pre[i];
        }

        return ans;

    }
};