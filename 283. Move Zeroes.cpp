class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int y = 0;
        for (int i = 0; i < size(nums); i++) {
            nums[y] = nums[i];
            if (nums[y] != 0) {
                y++;
            }
        }
        for (int i = y; i < size(nums); i++) {
            nums[i] = 0;
        }
    }
};
