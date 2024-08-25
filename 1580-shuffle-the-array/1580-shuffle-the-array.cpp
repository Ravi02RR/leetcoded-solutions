class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res(nums.size());
        if(nums.size()==0)return res;
        
        int i=0;
        int j=n;
        int k=0;
        while(k<nums.size()){
            res[k++]=nums[i++];
            res[k++]=nums[j++];
           
        }
        
        return res;

    }
};