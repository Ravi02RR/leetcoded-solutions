class Solution {
public:
    int helper(vector<vector<int>>& arr,int m,int n,vector<vector<int>> &dp){

        if(n==0 || m==0)return 0;
        if (m == 1 && n == 1) return arr[0][0] == 0 ? 1 : 0;
        if (arr[m-1][n-1] == 1) return 0;

        if(dp[m-1][n-1]!=0)return dp[m-1][n-1];


        int downway=helper(arr,m-1,n,dp);
        int rightway=helper(arr,m,n-1,dp);

        return dp[m-1][n-1]=downway+rightway;

    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> dp(m, vector<int>(n, 0));

        
        // for (int i = 0; i < m; i++) {
        //     for (int j = 0; j < n; j++) {
        //         if (arr[i][j] == 1) {
        //             dp[i][j]=0;  
        //         } else if (i == 0 && j == 0) {
        //             dp[i][j] = 1;  
        //         } else {
        //             if (i > 0) dp[i][j] += dp[i-1][j];  
        //             if (j > 0) dp[i][j] += dp[i][j-1];  
        //         }
        //     }
        // }

        // return dp[m-1][n-1];  

        return helper(arr,m,n,dp);
    }
};
