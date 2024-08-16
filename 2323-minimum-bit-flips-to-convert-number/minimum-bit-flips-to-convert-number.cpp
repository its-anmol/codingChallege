class Solution {
public:
    int minBitFlips(int start, int goal) {
        int k=start^goal;
        int ans=__builtin_popcount(k);
        return ans;
    }
};