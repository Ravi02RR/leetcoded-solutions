class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++)sum+=nums[i];
        while(k--){
            if(pq.top()==0)break;
            int ele=pq.top();
            pq.pop();
            sum-=ele;
            pq.push(ele*-1);
            sum+=(-ele);
        }

        return sum;
    }
};