class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto ele: nums){
            pq.push(ele);
        }

        while(pq.size() > 1) {
            int val1 = pq.top();
            pq.pop();
            int val2 = pq.top();
            pq.pop();

            if(val1 != val2) {
                int temp = val1 - val2;
                pq.push(temp);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};
