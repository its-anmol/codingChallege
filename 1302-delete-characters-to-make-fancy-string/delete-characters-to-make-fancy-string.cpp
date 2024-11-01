class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        if(s.size()<3) return s;
        int i;
        for(i=0;i<s.size()-3;i++){
            if(s[i]==s[i+1]&&s[i]==s[i+2]){
                continue;
            }
            res+=s[i];
        }
        if(s[i]!=s[i+1]||s[i]!=s[i+2]){
            res+=s[i];
            res+=s[i+1];
            res+=s[i+2];
        }
        else{
            res+=s[i];
            res+=s[i+1];
        }
        return res;
    }
};