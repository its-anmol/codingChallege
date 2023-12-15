class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,string> umap;
        for(auto i:paths){
            umap[i[0]]=i[1];
        }
        for(auto i:paths){
            if(umap.find(i[1])==umap.end()){
                return i[1];
            }
        }
        return "";
        
    }
};