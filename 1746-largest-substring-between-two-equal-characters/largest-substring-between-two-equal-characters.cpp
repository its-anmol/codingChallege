class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int> map;
        int maxsize=0;
        for(int i=0;i<s.size();i++){
            if(map.find(s[i])!=map.end()){
                int size=i-map[s[i]];
                maxsize=max(size,maxsize);
            }
            else{
                map[s[i]]=i;
            }
        }
        return maxsize-1;
    }
};