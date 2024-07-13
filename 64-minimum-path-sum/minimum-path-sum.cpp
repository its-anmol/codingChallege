class Solution {
public:
    int helper(vector<vector<int>>& grid,int n,int m){
        if(n<0||m<0) return 1e6+7;
        if(n==0&& m==0) return grid[n][m];
        int up=grid[n][m]+helper(grid,n-1,m);
        int left=grid[n][m]+helper(grid,n,m-1);
        return min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //return helper(grid,n-1,m-1);
        vector<vector<int>> dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0&&j==0) dp[i][j]=grid[i][j];
                else{
                    int up=INT_MAX,left=INT_MAX;
                    if(i-1>=0) up=grid[i][j]+dp[i-1][j];
                    if(j-1>=0) left=grid[i][j]+dp[i][j-1];
                    dp[i][j]=min(up,left);
                }
            }
        }
        return dp[n-1][m-1];
    }
};