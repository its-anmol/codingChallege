class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>&nums,int k){
        int count=0;
        int end=0;
        int start=0;
        int ans=0;
        while(end<nums.size()){
            if(nums[end]%2!=0) count++;
            while(start<=end && count>k){
                if(nums[start]%2!=0){
                    count--;
                }
                start++;
            }
            ans+=(end-start+1);
            end++;
        }
        return ans;
    }
};