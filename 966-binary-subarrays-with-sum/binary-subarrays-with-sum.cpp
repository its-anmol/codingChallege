class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmostk(nums,goal)-atmostk(nums,goal-1);
    }
    int atmostk(vector<int>&nums,int goal){
        int start=0;
        int end=0;
        int sum=0;
        int ans=0;
        while(end<nums.size()){
            sum+=nums[end];
            while(start<=end && sum>goal){
                sum-=nums[start];
                start++;
            }
            if(sum<=goal){
                ans+=(end-start+1);
            }
            end++;
        }
        return ans;
    }
};