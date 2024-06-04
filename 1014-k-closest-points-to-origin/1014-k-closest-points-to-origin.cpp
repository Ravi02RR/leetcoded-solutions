class Solution {
public:
    typedef pair<double,vector<int>>pi;
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) {
        priority_queue<pi>pq;
        for(int i=0;i<arr.size();i++){
            double dis=sqrt((arr[i][0]*arr[i][0]) + (arr[i][1]*arr[i][1]));
            pq.push({dis,arr[i]});
            if(pq.size()>k)pq.pop();
        }

        vector<vector<int>>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};