class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string temp="";
        string ans="";
        reverse(s.begin(),s.end());
        int i=0;
        while(i<n){
            while(s[i]==' '&&i<n){
                i++;
            }
            while(s[i]!=' '&&i<n){
                temp+=s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            ans+=temp;
            ans+=" ";
            temp="";
        }
        while(ans.back()==' ')
            ans.pop_back();
        return ans;
        
    }
};