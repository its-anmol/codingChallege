class Solution {
public:
    string destCity(vector<vector<string>>& p) {
        set<string> s;		
        for(auto &x:p)
        s.insert(x[1]);  		
        for(auto &x:p)
        s.erase(x[0]);
        return *s.begin();
    }
};