class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xor1=nums[0];
        for(int i=1;i<nums.size();i++){
            xor1^=nums[i];
        }
        xor1^=k;
        return __builtin_popcount(xor1);
    }
};