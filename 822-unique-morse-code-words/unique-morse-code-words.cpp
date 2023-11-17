class Solution {
public:
    string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

    string getcode(string word){
        string res="";
        for(auto c:word){
            res+=arr[c-'a'];
        }
        return res;
    }
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string,int> umap;
        for(auto word:words){
            umap[getcode(word)]++;
        }
        return umap.size();
        
    }
};