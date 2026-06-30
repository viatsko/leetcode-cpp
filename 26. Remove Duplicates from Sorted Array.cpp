class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        for (int i = 0; i < size(nums); i++) {
            nums[j++] = nums[i];
            while(i < size(nums) - 1 && nums[i + 1] == nums[i]) {
                i++;
            }
        }
        return j;
    }
};
