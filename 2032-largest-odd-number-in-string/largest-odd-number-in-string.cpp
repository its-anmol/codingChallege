class Solution {
public:
    string largestOddNumber(string num) {
        int maxODD=INT_MIN;
        for(int i=num.size();i>=0;i--){
            if(num[i]%2!=0){
                maxODD=i;
                break;
            }
        }
        // Check if at least one odd digit is present
        if (maxODD == INT_MIN) {
            // No odd digits found
            return "";
        }

        return num.substr(0, maxODD+1);
        
    }
};