class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(auto n:nums){
            umap[n]++;
        }
        int count=0;
        for(auto n:nums){
            if(umap.find(n+k)!=umap.end()){
                count+=umap[n+k];
            }
        }
        return count;
    }
};