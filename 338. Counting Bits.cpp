class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        result.reserve(n + 1);
        for (int i = 0; i <= n; i++) {
            result.push_back(__builtin_popcount(i));
        }
        return result;
    }
};
