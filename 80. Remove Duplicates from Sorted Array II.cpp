class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < size(nums); i++) {
            nums[j++] = nums[i];
            int reps = 0;
            while(i < size(nums) - 1 && nums[i + 1] == nums[i]) {
                if (reps++ == 0) {
                    nums[j++] = nums[i];
                }
                i++;
            }
        }
        return j;
    }
};
