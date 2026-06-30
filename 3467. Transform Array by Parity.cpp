class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> result(size(nums), 0);
        int j = size(nums) - 1;

        for (auto & num : nums) {
            if (num % 2 == 1) {
                result[j--] = 1;
            }
        }

        return result;
    }
};
