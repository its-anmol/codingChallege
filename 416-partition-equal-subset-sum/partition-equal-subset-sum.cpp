class Solution {
public:
    bool helper(vector<int>&nums,int target,int n,vector<vector<int>>&dp){
        if(n<0) return false;
        if(target==0) return true;
        if(n==0) return (nums[0]==target);
        if(dp[n][target]!=-1) return dp[n][target];
        bool notpick=helper(nums,target,n-1,dp);
        bool pick=false;
        if(target>=nums[n]) pick=helper(nums,target-nums[n],n-1,dp);
        return dp[n][target]=pick||notpick;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(auto i:nums){
            sum+=i;
        }
        if(sum%2!=0){
            return false;
        }
        else{
            vector<vector<int>> dp(n, vector<int>(sum/2+1,-1));
            return helper(nums,sum/2,n-1,dp);
        }
    }
};