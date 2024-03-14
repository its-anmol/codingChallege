class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> arr(3, 0);
        int start = 0;
        int res = 0;
        for (int end = 0; end < s.size(); end++) {
            arr[s[end] - 'a']++;
            while (arr[0] >= 1 && arr[1] >= 1 && arr[2] >= 1) {
                res += s.size() - end; 
                arr[s[start] - 'a']--;
                start++;
            }
        }
        return res; 
    }
};