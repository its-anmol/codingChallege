class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
       int min1=INT_MAX;
        int min2=INT_MAX;
        for(auto i:prices){
            if(money>i){
                if(i<min1){
                    min2=min1;
                    min1=i;
                }
                else if(i<min2){
                    min2=i;
                }
            }
        }
        int res=(min1 != INT_MAX && min2 != INT_MAX && (min1+min2)<=money)?money-min1-min2:money;
        return res;
    }
};