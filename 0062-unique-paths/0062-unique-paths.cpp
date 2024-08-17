class Solution {
public:
    int helper(int m,int n, vector<vector<int>>&dp){
        if(m<0 || n<0 ) return 0;
        if(m==1 || n==1) return 1;  
        if(dp[m-1][n-1]!=-1) return dp[m-1][n-1];
        return dp[m-1][n-1] = helper(m-1, n, dp) + helper(m, n-1, dp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, -1));
        if(m<0 || n<0 ) return 0;
        if(m==1 || n==1) return 1;  
        return helper(m, n, dp);
    }
};
