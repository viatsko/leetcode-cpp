class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (__builtin_popcount(i) == k) {
                result += nums[i];
            }
        }
        return result;
    }
};
