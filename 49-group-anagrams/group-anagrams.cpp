class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> ans;
        for(auto & str:strs){
            string s=str;
            sort(s.begin(),s.end());
            umap[s].push_back(str);
        }
        for(auto & v:umap){
            ans.push_back(v.second);
        }
        return ans;
        

        
    }
};