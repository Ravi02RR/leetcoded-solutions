class Solution {
public:
vector<vector<int>>ans;

void helper(vector<int>& v,int target,int idx,int curr,vector<int>temp){

    if(idx==v.size()){
       if(curr==target){
        sort(temp.begin(),temp.end());
         ans.push_back(temp);
       }
        return;
    }

    temp.push_back(v[idx]);
    helper(v,target,idx+1,curr+v[idx],temp);
    temp.pop_back();
    helper(v,target,idx+1,curr,temp);

}


vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<int>temp;
    helper(candidates,target,0,0,temp);
    sort(ans.begin(),ans.end());
    ans.erase(unique(ans.begin(),ans.end()),ans.end());

    return ans;
        
    }
};