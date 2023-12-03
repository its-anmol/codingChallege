class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        vector<int> prev=points[0];
        int time=0;
        for(auto p:points){
            time+=max(abs(p[0]-prev[0]),abs(p[1]-prev[1]));
            prev=p;
        }
        return time;
    }
};