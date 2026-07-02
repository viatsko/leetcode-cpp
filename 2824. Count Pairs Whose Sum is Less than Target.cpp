class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size() - 1;

        int result = 0;
        while (l < r) {
            if (nums[l] + nums[r] < target) {
                result += r - l;
                l++;
            } else {
                r--;
            }
        }
        return result;
    }
};
