class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector<int> result;
        for (int i = 0; i < matrix.size(); i++) {
            int curr = 0;
            for (int j = 0; j < matrix.size(); j++) {
                if (i != j && matrix[i][j]) {
                    curr++;
                }
            }
            result.push_back(curr);
        }
        return result;
    }
};
