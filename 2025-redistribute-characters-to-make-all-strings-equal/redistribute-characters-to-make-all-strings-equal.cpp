class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int> count;
        for( auto w:words){
            for(auto ch:w){
                count[ch]++;
            }
        }
        int n=words.size();
        for(auto a:count){
            if(a.second%n!=0){
                return false;
            }
        }
        return true;
    }
};