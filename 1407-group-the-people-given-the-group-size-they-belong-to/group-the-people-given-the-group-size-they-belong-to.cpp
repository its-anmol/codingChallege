class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        vector<int> arraymap[groupSizes.size()+1];
        for(int i=0;i<groupSizes.size();i++){
            arraymap[groupSizes[i]].push_back(i);
            if(arraymap[groupSizes[i]].size()==groupSizes[i]){
                ans.push_back(arraymap[groupSizes[i]]);
                arraymap[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};