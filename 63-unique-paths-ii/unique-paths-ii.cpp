class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int m,int n, vector<vector<int>> &dp){
        if(m==0&& n==0) return 1;
        if(m<0||n<0) return 0;
        if(m>=0 && n>=0&&obstacleGrid[m][n]==1) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        int up=helper(obstacleGrid,m-1,n,dp);
        int down=helper(obstacleGrid,m,n-1,dp);
        return dp[m][n]=up + down;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>> dp(m,vector<int>(n,-1));
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) // If the starting or ending point is blocked, return 0
            return 0;
        return helper(obstacleGrid,m-1,n-1,dp);
    }
};