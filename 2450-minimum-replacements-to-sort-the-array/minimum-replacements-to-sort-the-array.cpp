class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n=nums.size()-1;
        long long operation=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[i+1]){
                int parts=nums[i]/nums[i+1];
                if(nums[i]%nums[i+1]!=0){
                    parts++;
                }
                operation+=(parts-1);
                nums[i]=nums[i]/parts;
            }
        }
        return operation;
    }
};