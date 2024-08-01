class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> umap;
        int low=0;
        int high=0;
        int res=0;
        while(high<s.size()){
            if(umap.find(s[high])==umap.end()){
                umap[s[high]]=high;
            }
            else{
                low=max(umap[s[high]]+1,low);
                umap[s[high]]=high;
            }
            res=max(res,high-low+1);
            high++;
        }
        return res;
    }
};