class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1="";
        string w2="";
        for(auto ch:word1){
            w1+=ch;
        }
        for(auto ch:word2){
            w2+=ch;
        }
        return w1==w2;
        
    }
};