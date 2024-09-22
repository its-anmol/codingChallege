class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> dp(n,1);
        vector<int> hash(n,1);
        
        for(int ind=0;ind<n;ind++){
            hash[ind]=ind;
            for(int prevind=0;prevind<ind;prevind++){
                if(nums[ind]%nums[prevind]==0 &&1+dp[prevind]>dp[ind]){
                    dp[ind]=1+dp[prevind];
                    hash[ind]=prevind;
                }
            }
        }
        int ans=-1;
        int lastIndex =-1;
        for(int i=0;i<n;i++){
            if(dp[i]>ans){
                ans=dp[i];
                lastIndex=i;
            }
        }
        vector<int> temp;
        temp.push_back(nums[lastIndex]);
        while(hash[lastIndex] != lastIndex){ // till not reach the initialization value
            lastIndex = hash[lastIndex];
            temp.push_back(nums[lastIndex]);    
        }

        reverse(temp.begin(),temp.end());
        return temp;
    }
};