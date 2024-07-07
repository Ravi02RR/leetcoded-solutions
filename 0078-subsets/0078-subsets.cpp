class Solution {
public:
vector<vector<int>>ans;
void helper(vector<int>& nums,vector<int>temp,int idx){
    if(idx==nums.size()){
        ans.push_back(temp);
        return;
    }

    //take wala case
    temp.push_back(nums[idx]);
    helper(nums,temp,idx+1);
    temp.pop_back();
    helper(nums,temp,idx+1);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        helper(nums,temp,0);

        sort(ans.begin(),ans.end());
        return ans;
        
    }
};