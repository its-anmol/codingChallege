class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long operation=0;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<=nums[i+1]) continue;
            int parts=nums[i]/nums[i+1];
            if(nums[i]%nums[i+1]!=0){
                parts++;
            }
            operation+=(parts-1);
            nums[i]=nums[i]/parts;
        }
        return operation;
    }
};