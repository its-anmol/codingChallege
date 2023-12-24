class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        set<string>s;
        s.insert("0,0");
        for(auto p:path){
            if(p=='N'){
                y++;
            }
            else if(p=='S'){
                y--;
            }
            else if(p=='E'){
                x++;
            }
            else{
                x--;
            }
            string t = to_string(x) + "," + to_string(y);
            if(s.find(t)!=s.end()) return true;
            else{
                s.insert(t);
            }
        }
        return false;
        
    }
};