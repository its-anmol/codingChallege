class Solution {
public:
    int rev(int n){
        int res=0;
        while(n>0){
            res=res*10+n%10;
            n/=10;
        }
        return res;
    }
    int countNicePairs(vector<int>& nums) {
        vector<int> arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(nums[i]-rev(nums[i]));
        }
        unordered_map<int,int> umap;
        int ans=0;
        int MOD=1e9+7;
        for(auto n:arr){
            ans=(ans+umap[n])%MOD;
            umap[n]++;
        }
        return ans;        
    }
};