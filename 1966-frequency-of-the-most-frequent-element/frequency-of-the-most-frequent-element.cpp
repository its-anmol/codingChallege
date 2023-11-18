class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long res=0;
        long left=0;
        long right=0;
        long sum=nums[0];
        while(right<nums.size()){
            if(nums[right]*(right-left+1)<=k+sum){
                res=max(res,right-left+1);
                right++;
                if(right<nums.size()){
                    sum+=nums[right];
                }
            }
            else{
                sum-=nums[left];
                left++;
            }
        }
        return res;
    }
};