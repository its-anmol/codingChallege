class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        for(auto s:stones){
            for(auto j:jewels){
                if(s==j) count++;
            }
        }
        return count;
        
    }
};