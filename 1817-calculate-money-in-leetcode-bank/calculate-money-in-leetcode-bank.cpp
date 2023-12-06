class Solution {
public:
    int totalMoney(int n) {
        int week=n/7;
        int firstweek=28;
        int lastweek=28+(week-1)*7;
        int sum=week*(firstweek+lastweek)/2;

        int monday=1+week;
        int finalweek=0;
        for(int day=0;day<n%7;day++){
            finalweek+=monday+day;
        }
        return sum+finalweek;
        
    }
};