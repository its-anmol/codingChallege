class Solution {
public:
    int helper(vector<vector<int>>& triangle, int n, int m, vector<vector<int>> &dp) {
        if (n < 0 || m <0|| m >= triangle[n].size()) return 1e6; 
        if (n==0 &&m==0) return triangle[n][m]; 
        if(dp[n][m]!=-1) return dp[n][m];
        int left = triangle[n][m] + helper(triangle, n-1,m,dp); // Move left
        int diag = triangle[n][m] + helper(triangle, n - 1, m - 1,dp); // Move up
        
        
        // Return the minimum of the two paths
        return dp[n][m]= min(left, diag);
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n - 1].size(); // Last row size
        int res=INT_MAX;
        // Call helper function starting from the bottom of the triangle
        for (int i=0;i<m;i++){
            vector<vector<int>> dp(n,vector<int>(m,-1));
            res=min(helper(triangle,n-1,i,dp),res);
        }
        return res;
    }
};
