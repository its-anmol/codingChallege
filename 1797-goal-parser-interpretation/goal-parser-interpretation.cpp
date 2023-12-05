class Solution {
public:
    string interpret(string command) {
        string res="";
        int n=command.size();
        int i=0;
        while(i<n){
            if(command[i]=='G'){
                res+=command[i];
                i++;
            }
            else if(command[i]=='('&&command[i+1]==')'){
                res+="o";
                i+=2;
            }
            else{
                res+="al";
                i+=4;
            }
        }
        return res;
    }
};