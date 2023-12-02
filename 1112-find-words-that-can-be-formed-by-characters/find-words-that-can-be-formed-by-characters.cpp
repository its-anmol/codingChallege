class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map <char,int> umap;
        for(auto c:chars){
            umap[c]++;
        }
        int res=0;
        for(auto word:words){
            unordered_map<char, int> wordfreq;
            int count=0;
            for(auto c:word){
                wordfreq[c]++;
                if(wordfreq[c]<=umap[c]){
                    count++;
                }
                else{
                    count=0;
                    break;
                }
            }
            res+=count;
        }
        return res;
    }
};