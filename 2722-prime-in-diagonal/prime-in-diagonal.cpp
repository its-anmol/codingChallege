class Solution {
public:
    bool isprime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            if(isprime(nums[i][i])){
                res=max(res,nums[i][i]);
            }
            if(isprime(nums[n-i-1][i])){
                res=max(res,nums[n-i-1][i]);
            }
        }
        return res;
    }
};