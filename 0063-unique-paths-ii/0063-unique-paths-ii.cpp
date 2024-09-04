class Solution {
public:
    bool canWeGo(vector<vector<int>>& arr, int m, int n, int i, int j) {
        return i >= 0 && j >= 0 && i < m && j < n && arr[i][j] == 0;
    }

    int helper(vector<vector<int>>& arr, int m, int n, vector<vector<int>>& dp) {
        
        if (arr[0][0] == 1) return 0;
        if(arr[m-1][n-1]==1)return 0;

       
        if (m == 1 && n == 1) return 1;

        
        if (dp[m-1][n-1] != -1) return dp[m-1][n-1];

        int downway = 0, rightway = 0;

        
        if (canWeGo(arr, m, n, m-1, n-2)) {
            rightway = helper(arr, m, n-1, dp);
        }

       
        if (canWeGo(arr, m-1, n, m-2, n-1)) {
            downway = helper(arr, m-1, n, dp);
        }

        
        return dp[m-1][n-1] = downway + rightway;
    }

    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
        int m = arr.size();
        int n = arr[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));

        return helper(arr, m, n, dp);
    }
};
