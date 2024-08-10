class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp=prices[0];
        int profit=INT_MIN;
        for(auto i:prices){
            profit=max(profit,i-minp);
            minp=min(minp,i);
        }
        return profit;
    }
};