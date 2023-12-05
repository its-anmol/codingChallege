class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        string complete="";
        for(int i=0;i<sentences.size();i++){
            complete+=sentences[i];
            complete+=".";
        }
        int ans=0;
        int count=0;
        for(auto i:complete){
            if(i==' ') count++;
            else if(i=='.'){
                count++;
                ans=max(ans,count);
                count=0;
            }
        }
        ans=max(ans,count);
        return ans;
    }
};