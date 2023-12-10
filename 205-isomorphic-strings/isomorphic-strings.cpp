class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,char> umap1;
        unordered_map<char,char> umap2;
        for(int i=0;i<s.size();i++){
            if(umap1[s[i]]&&umap1[s[i]]!=t[i]) return false;
            if(umap2[t[i]]&&umap2[t[i]]!=s[i]) return false;
            umap1[s[i]]=t[i];
            umap2[t[i]]=s[i];
        }
        return true;
        
        
    }
};