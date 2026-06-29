class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int result = 0;

        int l = 0;
        int r = size(nums) - 1;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum == k) {
                result++;
                l++;
                r--;
            } else if (sum < k) {
                l++;
            } else if (sum > k) {
                r--;
            }
        }
        return result;
    }
};
