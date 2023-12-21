class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int result=INT_MIN;
        sort(points.begin(),points.end());
        for(int i=1;i<points.size();i++){
            int width=points[i][0]-points[i-1][0];
            result=max(width,result);
        }
        return result;
    }
};