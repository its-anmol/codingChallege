class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int windsize=INT_MAX;
        int high=0;
        int low=0;
        while(high<n){
            sum+=nums[high];
            high++;
            while(sum>=target){
                int currwind=high-low;
                windsize=min(currwind,windsize);
                sum-=nums[low];
                low++;
            }
        }
        return (windsize==INT_MAX)?0:windsize;        
    }
};