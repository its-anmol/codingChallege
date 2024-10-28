class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int, int> streakLengths;
        int longestStreak = 1;
        sort(nums.begin(), nums.end());
        for (int number : nums) {
            int root = (int)sqrt(number);
            if (root * root == number && streakLengths.find(root) != streakLengths.end()) {
                streakLengths[number] = streakLengths[root] + 1;
                longestStreak=max(longestStreak,streakLengths[number]);
            } else {
                streakLengths[number] = 1;
            }
        }
        return longestStreak == 1 ? -1 : longestStreak;
    }
};