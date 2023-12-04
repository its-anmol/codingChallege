class Solution {
public:
    string largestGoodInteger(string num) {
        char ch='-';
        if(num.size()<3){
            return "";
        }
        for(int i=0;i<num.size()-2;i++){
            if(num[i]==num[i+1]&&num[i+1]==num[i+2]){
                if(ch<num[i]){
                    ch=num[i];
                }
            }
        }
        if(ch!='-'){
            return string(3,ch);
        }
        return "";
        
    }
};