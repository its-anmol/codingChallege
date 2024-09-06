class Solution {
public:
    int helper(vector<vector<int>>& obstacleGrid,int m,int n){
        if(m==0||n==0) return 0;
        if(obstacleGrid[m-1][n-1]==1) return 0;
        if(m==1&&n==1) return 1;
        int up=helper(obstacleGrid,m-1,n);
        int left=helper(obstacleGrid,m,n-1);
        return up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        // return helper(obstacleGrid,m,n);
        if (obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1) return 0;
        vector<vector<long long>> dp(m+1,vector<long long>(n+1,0));
        dp[1][1]=1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(i==1&&j==1) continue;
                if(obstacleGrid[i-1][j-1]==1){
                    dp[i][j]=0;
                    continue;
                }
                int up=dp[i-1][j];
                int left=dp[i][j-1];
                dp[i][j]=up+left;
            }
        }
        return dp[m][n];
    }
};