class Solution {
public:
    int helper(vector<int>&nums,int ind,int prevind,vector<vector<int>> &dp){
        if(ind>=nums.size()) return 0;
        int nottake=helper(nums,ind+1,prevind,dp);
        int take=0;
        if(dp[ind][prevind+1]!=-1) return dp[ind][prevind+1];
        if(prevind==-1||nums[prevind]<nums[ind]){
            take=1+helper(nums,ind+1,ind,dp);
        }
        return dp[ind][prevind+1]=max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        // vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        // return helper(nums,0,-1,dp);
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        for(int ind=n-1;ind>=0;ind--){
            for(int prevind=ind-1;prevind>=-1;prevind--){
                int nottake=dp[ind+1][prevind+1];
                int take=0;
                if(prevind==-1||nums[prevind]<nums[ind]){
                    take=1+dp[ind+1][ind+1];
             }
            dp[ind][prevind+1]=max(take,nottake);
            }
        }
        return dp[0][0];
    }
};