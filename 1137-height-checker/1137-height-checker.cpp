class Solution {
public:
    int heightChecker(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto ele:nums){
            pq.push(ele);
        }
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(pq.top()!=nums[i])count++;
            pq.pop();
        }
        return count;
    }
};