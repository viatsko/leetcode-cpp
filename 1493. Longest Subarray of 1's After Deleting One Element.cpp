class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int window_start = 0;
        int used_zeros = 0;
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (used_zeros >= 1) {
                    while (nums[window_start] != 0) {
                        window_start++;
                    }
                    window_start++;
                }
                used_zeros++;
            }
            result = max(result, i - window_start);
        }
        return result;
    }
};
