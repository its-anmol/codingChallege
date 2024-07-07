class Solution {
public:
    int helper(vector<int>& nums, vector<vector<int>>&dp,int ind,int prevind,int n){
        if(ind==n) return 0;
        if(dp[ind][prevind+1]!=-1) return dp[ind][prevind+1];
        int len=helper(nums,dp,ind+1,prevind,n);
        if(prevind==-1||nums[ind]>nums[prevind])
          len= max(len,1+helper(nums,dp,ind+1,ind,n));
        return dp[ind][prevind+1]=len;
    } 
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp (n+1,vector<int>(n+1,-1));
        return helper(nums,dp,0,-1,nums.size());
    }
};