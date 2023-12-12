class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max=INT_MIN;
        int secondmax=INT_MIN;
        for(auto n:nums){
            if(n>max){
                secondmax=max;
                max=n;
                continue;
            }
            else{
                if(n>secondmax){
                    secondmax=n;
                }
            }
        }
        return (max-1)*(secondmax-1);        
    }
};