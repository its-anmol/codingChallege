class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int res=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            res=max(res,nums[i]);
        }
        int ans=0;
        while(k>0){
            ans+=res;
            res++;
            k--;
        }
        return ans;
        
    }
};