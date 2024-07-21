class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        unordered_map<int,int> umap;
        int sum=0;
        umap[0]=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            umap[sum]=i;
        }
        if(sum<x) return -1;
        int res=INT_MIN;
        int remain=sum-x;
        sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int findsum=sum-remain;
            if(umap.find(findsum)!=umap.end()){
                int idx=umap[findsum];
                res=max(res,(i-idx));
            }
        }
        return (res == INT_MIN) ? -1 : n - res;
    }
};