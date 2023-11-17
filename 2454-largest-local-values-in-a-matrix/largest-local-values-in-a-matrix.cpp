class Solution {
public:
    int findmax(vector<vector<int>>&grid,int i,int j){
        int maxa=INT_MIN;
        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                maxa=max(maxa,grid[x][y]);
            }
        }
        return maxa;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> v(n-2,vector<int>(n-2));
        for(int i=0;i<grid.size()-2;i++){
            for(int j=0;j<grid.size()-2;j++){
                v[i][j]=findmax(grid,i,j);
            }
        }
        return v;
        
    }
};