class Solution {
public:
    int helper(vector<int>&prices,int i,int buy,int n, vector<vector<int>> &dp){
        if(i==prices.size()) return 0;
        int profit=0;
        if(dp[i][buy]!=-1) return dp[i][buy];
        if(buy){
            profit= max(-prices[i]+helper(prices,i+1,0,n,dp),helper(prices,i+1,1,n,dp));
        }
        else{
            profit=max(prices[i]+helper(prices,i+1,1,n,dp),helper(prices,i+1,0,n,dp));
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        return helper(prices,0,1,n,dp);
    }
};