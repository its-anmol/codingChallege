class Solution {
public:
    int beauty(vector<int>apha){
        int maxf=INT_MIN;
        int minf=INT_MAX;
        for(int i=0;i<26;i++){
            maxf=max(maxf,apha[i]);
            if(apha[i]>0){
                minf=min(minf,apha[i]);
            }
           
        }
        return maxf-minf;
    }
    int beautySum(string s) {
        int res=0;
        for(int i=0;i<s.size();i++){
            vector<int> alpha(26,0);
            for(int j=i;j<s.size();j++){
                alpha[s[j]-'a']++;
                res+=beauty(alpha);
            }
        }
        return res;
    }
};