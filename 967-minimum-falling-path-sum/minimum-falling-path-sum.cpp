class Solution {
public:
    int helper(vector<vector<int>> &matrix,int n,int m,vector<vector<int>>&dp){
        if(n<0||m<0||m>=matrix[n].size()) return 1e5;
        if(n==0) return matrix[n][m];
        if(dp[n][m]!=-1) return dp[n][m];
        int up=matrix[n][m]+helper(matrix,n-1,m,dp);
        int left=matrix[n][m]+helper(matrix,n-1,m-1,dp);
        int right=matrix[n][m]+helper(matrix,n-1,m+1,dp);
        return dp[n][m]= min(up,min(left,right));
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int res=INT_MAX;
        // for(int i=0;i<m;i++){
        //     vector<vector<int>>dp(n,vector<int>(m,-1));
        //     res=min(res,helper(matrix,n-1,i,dp));
        // }

        vector<vector<int>>dp(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            dp[0][i]=matrix[0][i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0) continue;
                else{
                    int up=INT_MAX,left=INT_MAX,right=INT_MAX;
                    if(i-1>=0) up=matrix[i][j]+dp[i-1][j];
                    if(i-1>=0 &&j-1>=0) left=matrix[i][j]+dp[i-1][j-1];
                    if(i-1>=0&&j+1<m) right=matrix[i][j]+dp[i-1][j+1];
                    dp[i][j]=min(up,min(left,right));
                }
            }
        }
        int minPathSum = INT_MAX;
        for (int j = 0; j < m; j++) {
            minPathSum = min(minPathSum, dp[n - 1][j]);
        }
    return minPathSum;
    // return res;
    }
};