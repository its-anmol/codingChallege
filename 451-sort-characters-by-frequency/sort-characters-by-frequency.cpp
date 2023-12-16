class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> umap;
        for(auto ch:s){
            umap[ch]++;
        }
        priority_queue<pair<int,char>> maxH;
        for(auto it:umap){
            maxH.push({it.second,it.first});
        }
        string res="";
        while(maxH.size()>0){
            int freq=maxH.top().first;
            char ch=maxH.top().second; 
            while(freq>0){
                res.push_back(ch);
                freq--;
            }
            maxH.pop();
        }
        return res;
    }
};