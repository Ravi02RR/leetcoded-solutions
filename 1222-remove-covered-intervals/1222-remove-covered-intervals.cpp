class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& arr) {
        std::ios_base::sync_with_stdio(false);
        sort(arr.begin(),arr.end());
        int left=-1, right= -1, ans=0;

        for(auto v :arr){
            if(v[0]>left && v[1]>right){
                ans++;
                left=v[0];
            }

            right=max(right,v[1]);
            
               
        }
        return ans;

       
    }
};