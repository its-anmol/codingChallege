class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        vector<int> rowones(row,0);
        vector<int> colones(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    rowones[i]++;
                    colones[j]++;
                }
            }
        }
        int result=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    if(rowones[i]==1&&colones[j]==1) result++;
                }
            }
        }
        return result;
    }
};