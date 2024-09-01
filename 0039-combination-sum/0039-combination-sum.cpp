class Solution {
public:
vector<vector<int>>ans;
    void helper(vector<int>& candidates, int target,int idx,int sum,vector<int>temp){
        if(sum>target)return;
        if(idx==candidates.size()){
            if(sum==target){

                ans.push_back(temp);
                
            }
            return;
        }

        sum+=candidates[idx];
         temp.push_back(candidates[idx]);
        helper(candidates,target,idx,sum,temp);
        sum-=candidates[idx];
        temp.pop_back();
        helper(candidates,target,idx+1,sum,temp);


    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        helper(candidates,target,0,0,temp);
        
        return ans;
    }
};