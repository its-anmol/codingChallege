class Solution {
public:
    bool comp(string s1,string s2){
        if(s1.size()!=s2.size()+1) return false;
        int first=0;
        int second=0;
        while(first<s1.size()){
            if(s1[first]==s2[second]){
                first++;
                second++;
            }
            else{
                first++;                
            }
        }
        if(first==s1.size() && second==s2.size()) return true;
        return false;
    }
    static bool chck(string &s1,string &s2){
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), chck);

        int n=words.size();
        vector<int> dp(n,1);
        int maxi=1;
        for(int ind=0;ind<n;ind++){
            for(int prevind=0;prevind<ind;prevind++){
                if(comp(words[ind],words[prevind])&& 1+dp[prevind]>dp[ind]){
                    dp[ind]=1+dp[prevind];
                }
            }
            maxi=max(maxi,dp[ind]);
        }
        return maxi;
    }
};