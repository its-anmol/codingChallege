class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int tsum=accumulate(nums.begin(),nums.end(),0);
        int digitsum=0;
        for(auto n:nums){
            while(n){
                digitsum+=n%10;
                n/=10;
            }
        }
        return abs(tsum-digitsum);
        
    }
};