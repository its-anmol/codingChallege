class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        int ans=0;
        int horzcut=1,vercut=1,i=0,j=0;
        sort(horizontalCut.begin(),horizontalCut.end(),greater<int>());
        sort(verticalCut.begin(),verticalCut.end(),greater<int>());
        while(i<horizontalCut.size()&&j<verticalCut.size()){
            if(horizontalCut[i]>=verticalCut[j]){
                ans+=vercut*horizontalCut[i];
                horzcut++;
                i++;
            }
            else{
                ans+=horzcut*verticalCut[j];
                vercut++;
                j++;
            }
        }
        while(i<horizontalCut.size()){
            ans+=vercut*horizontalCut[i];
            horzcut++;
            i++;
        }
        while(j<verticalCut.size()){
            ans+=horzcut*verticalCut[j];
            vercut++;
            j++;
        }
        return ans;
    }
};