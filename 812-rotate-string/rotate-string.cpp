class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string concat=goal+goal;
        return concat.find(s)!=string::npos;
        
    }
};