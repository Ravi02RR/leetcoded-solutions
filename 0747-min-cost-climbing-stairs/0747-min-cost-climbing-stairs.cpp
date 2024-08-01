class Solution {
public:
    int helper(int idx, vector<int>& cost, vector<int>& dp) {
        if (idx <= 1) {
            return cost[idx];
        }
        if (dp[idx] != -1) {
            return dp[idx];
        }
        dp[idx] = cost[idx] + min(helper(idx-1, cost, dp), helper(idx-2, cost, dp));
        return dp[idx];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        return min(helper(n-1, cost, dp), helper(n-2, cost, dp));
    }
};
