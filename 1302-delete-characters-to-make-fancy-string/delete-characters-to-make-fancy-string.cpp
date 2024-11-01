class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        int freq=0;
        for(auto ch:s){
            if(res.empty()||ch==res.back()){
                freq++;
                if(freq<3){
                    res+=ch;
                }
            }
            else{
                res+=ch;
                freq=1;
            }
        }
        return res;
    }
};