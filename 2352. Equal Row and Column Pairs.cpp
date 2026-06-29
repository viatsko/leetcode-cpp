class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<vector<int>, int> mp;

        for (auto&row: grid) {
            mp[row]++;
        }

        int result = 0;

        for (int col = 0; col < grid.size(); col++) {
            vector<int> tocomp;
            for (int row = 0; row < grid.size(); row++) {
                tocomp.push_back(grid[row][col]);
            }
            if (mp.count(tocomp)) {
                result += mp[tocomp];
            }
        }

        return result;
    }
};
