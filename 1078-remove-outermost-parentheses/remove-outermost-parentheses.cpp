class Solution {
public:
    string removeOuterParentheses(string s) {
        string res="";
        stack<char> stk;
        for(auto x:s){
            if(x=='('){
                if(stk.size()>0){
                    res+=x;
                }
            stk.push(x);
            }
            else{
                stk.pop();
                if(stk.size()>0){
                    res+=x;
                }
            }
        }
        return res;
    }
};