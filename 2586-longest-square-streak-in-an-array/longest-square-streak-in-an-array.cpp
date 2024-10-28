class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int maxStreak = -1;
        std::unordered_map<int, int> streaks;
        
        std::sort(nums.begin(), nums.end());
        
        for (int i : nums) {
            int root = static_cast<int>(std::sqrt(i));
            
            if (root * root == i && streaks.find(root) != streaks.end()) {
                streaks[i] = streaks[root] + 1;
                maxStreak = std::max(streaks[i], maxStreak);
            } else {
                streaks[i] = 1;
                maxStreak = std::max(streaks[i], maxStreak);
            }
        }
        
        return maxStreak == 1 ? -1 : maxStreak;
    }
};