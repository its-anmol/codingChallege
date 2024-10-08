class Solution {
public:
    int countPrimes(int n) {
        vector<bool> sieve(n+1,true);
        sieve[0]=0;
        sieve[1]=0;
        for(int i=2;i<=n;i++){
            if(sieve[i]){
                for(int j=2*i;j<=n;j+=i){
                    sieve[j]=0;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(sieve[i]) count++;
        }
        return count;
    }
};