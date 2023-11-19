class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        long count=1;
        long ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                ans+=count;
            }
            count++;
        }
        return ans;
    }
};