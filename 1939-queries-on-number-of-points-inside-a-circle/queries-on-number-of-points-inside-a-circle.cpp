class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto q:queries){
            int rad=q[2];
            int x=q[0];
            int y=q[1];
            int count=0;
            for(auto p:points){
                int d=((p[0]-x)*(p[0]-x)+(p[1]-y)*(p[1]-y));
                if(d<=rad*rad){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};