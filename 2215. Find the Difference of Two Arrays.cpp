class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        vector<int> missing1;
        vector<int> missing2;
        for (auto &num : nums1) {
            if (set2.count(num) == 0) {
                missing1.push_back(num);
                set2.insert(num);
            }
        }
        for (auto &num : nums2) {
            if (set1.count(num) == 0) {
                missing2.push_back(num);
                set1.insert(num);
            }
        }

        return {missing1, missing2};
    }
};
