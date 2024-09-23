class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        if(k==0){
            return (nums1==nums2)?0:-1;
        }
        long long posdiff=0;
        long long negdiff=0;
        for(int i=0;i<n;i++){
            if(nums1[i]>nums2[i]){
                if((nums1[i]-nums2[i])%k==0){
                    posdiff+=(nums1[i]-nums2[i]);
                }
                else{
                    return -1;
                }
            }
            else if(nums1[i]<nums2[i]){
                if((nums2[i]-nums1[i])%k==0){
                    negdiff+=(nums2[i]-nums1[i]);
                }
                else{
                    return -1;
                }
            }
            else{
                continue;
            }
        }
        if(posdiff==negdiff){
            return posdiff/k;
        }
        return -1;
    }
};