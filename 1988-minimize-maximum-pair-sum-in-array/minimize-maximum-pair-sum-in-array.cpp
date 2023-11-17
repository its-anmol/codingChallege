class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0;
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            res=max(res,nums[left]+nums[right]);
            left++;
            right--;
        }
        return res;
    }
};