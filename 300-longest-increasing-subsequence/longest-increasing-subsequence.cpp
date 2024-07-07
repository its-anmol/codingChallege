class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,1);
        int maxi=1;
        for(int ind=1;ind<n;ind++){
            for(int prevind=0;prevind<ind;prevind++){
                if(nums[ind]>nums[prevind]){
                    dp[ind]=max(dp[ind],1+dp[prevind]);
                }
            }
            maxi=max(maxi,dp[ind]);
        }
        return maxi;
    }
}; 