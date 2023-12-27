class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int prev=neededTime[0];
        int time=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i]!=colors[i-1]){
                prev=0;
            }
            time+=min(prev,neededTime[i]);
            prev=max(prev,neededTime[i]);
        }
        return time;
    }
};