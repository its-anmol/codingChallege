class Solution {
public:
    int helper(vector<int>prices,int ind,int buy,int cap,vector<vector<vector<int>>>&dp){
        if(ind==prices.size()) return 0;
        if(cap==2) return 0;
        if(dp[ind][buy][cap]!=-1)return dp[ind][buy][cap];
        if(buy){
            return dp[ind][buy][cap]=max(-prices[ind]+helper(prices,ind+1,0,cap,dp),helper(prices,ind+1,1,cap,dp));
        }
        else{
            return dp[ind][buy][cap]=max(prices[ind]+helper(prices,ind+1,1,cap+1,dp),helper(prices,ind+1,0,cap,dp));
        }
    }

    int maxProfit(vector<int>& prices) {
        int k=2;
        int n=prices.size();
        // vector<vector<vector<int>>> dp(n,vector<vector<int>>(2,vector<int>(k,-1)));
        // return helper(prices,0,1,0,dp);
        vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));
        for(int ind=n-1;ind>=0;ind--){
            for(int buy=1;buy>=0;buy--){
                for(int cap=1;cap>=0;cap--){
                    if(buy){
                        dp[ind][buy][cap]=max(-prices[ind]+dp[ind+1][0][cap],dp[ind+1][1][cap]);
                    }
                else{
                        dp[ind][buy][cap]=max(prices[ind]+dp[ind+1][1][cap+1],dp[ind+1][0][cap]);
                    }
                }
            }
        }
        return dp[0][1][0];
    }
};