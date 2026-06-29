class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> occ;
        for (auto& num: arr) {
            occ[num]++;
        }
        unordered_set<int> rep;
        for(auto & entry: occ) {
            if (rep.count(entry.second)) {
                return false;
            }
            rep.insert(entry.second);
        }
        return true;
    }
};
