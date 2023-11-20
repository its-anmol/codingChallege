class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> map;
        for(auto n:deck) map[n]++;
        int g=map[deck[0]];
        for(auto x:map){
            g=gcd(g,x.second);
        }
        return g>1;
        
    }
};