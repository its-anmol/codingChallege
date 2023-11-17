class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>s;
        for(auto c:allowed){
            s.insert(c);
        }
        int res=0;
        for(auto word:words){
            res++;
            for(auto ch:word){
                if(s.find(ch)==s.end()){
                    res--;
                    break;
                }
            }
        }
        return res;
    }
};