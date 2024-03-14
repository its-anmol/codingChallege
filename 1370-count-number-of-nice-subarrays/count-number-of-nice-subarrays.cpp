class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int count=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                count++;
            }
            if(count==k){
                res++;
            }
            if(umap.find(count-k)!=umap.end()){
                res+=umap[count-k];
            }

            umap[count]++;
        }
        return res;

    }
};