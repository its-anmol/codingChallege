class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> umap;
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum==goal){
                count++;
            }
            if(umap.find(sum-goal)!=umap.end()){
                count+=umap[sum-goal];
            }
            umap[sum]++;
        }
        return count;
    }
};