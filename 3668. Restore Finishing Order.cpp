class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> frs(friends.begin(), friends.end());
        vector<int> result;
        for (auto & entry : order) {
            if (frs.count(entry)) {
                result.push_back(entry);
            }
        }
        return result;
    }
};
