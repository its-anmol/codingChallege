class Solution {
public:
    int climbhelper(int n,vector<int> &dp){
        if(n==0) return 1;
        if(n<0) return 0;
        if(dp[n]!=-1) return dp[n];
        int pick=climbhelper(n-1,dp);
        int notpick=climbhelper(n-2,dp);
        return dp[n]=pick+notpick;
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return climbhelper(n,dp);
    }
};