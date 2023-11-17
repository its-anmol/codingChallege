class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int res=0;
        int curralt=0;
        for(auto alt:gain){
            curralt+=alt;
            res=max(res,curralt);
        }
        return res;
    }
};