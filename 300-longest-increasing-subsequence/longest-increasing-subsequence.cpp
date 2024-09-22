class Solution {
public:
    int helper(vector<int>&arr,int ind,int prevind){
        if(ind==arr.size()){
            return 0;
        }
        int nottake=helper(arr,ind+1,prevind);
        int take=0;
        if(prevind==-1||arr[ind]>arr[prevind]){
            take= 1+helper(arr,ind+1,ind);
        }
        return max(take,nottake);
    }
    int lengthOfLIS(vector<int>& arr) {
        // return helper(nums,0,-1);
        int n = arr.size();
        if (n == 0) return 0;
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int prevind = ind - 1; prevind >= -1; prevind--) {
                int notTake=dp[ind+1][prevind+1];
                int take=0;
                if(prevind==-1||arr[ind]>arr[prevind]){
                    take=1+dp[ind+1][ind+1];
                }
                dp[ind][prevind+1]=max(take,notTake);
            }
        }
        return dp[0][0];
    }
};