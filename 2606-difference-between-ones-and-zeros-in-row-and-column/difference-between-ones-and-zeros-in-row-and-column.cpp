class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<int> rowones(row,0);
        vector<int> colones(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    rowones[i]++;
                    colones[j]++;
                }
            }
        }
        vector<vector<int>> diff(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int rowone=rowones[i];
                int rowzero=col-rowone;
                int colone=colones[j];
                int colzero=row-colone;
                diff[i][j]=rowone+colone-rowzero-colzero;
            }
        }
        return diff;





        
    }
};