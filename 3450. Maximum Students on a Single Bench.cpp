class Solution {
public:
    int maxStudentsOnBench(vector<vector<int>>& students) {
        bitset<101> bench[101];
        int result = 0;
        for (const auto & student : students) {
            bench[student[1]].set(student[0]);
            result = max(result, static_cast<int>(bench[student[1]].count()));
        }
        return result;
    }
};
