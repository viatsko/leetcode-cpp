class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](auto & a, auto &b){ return a[1] < b[1]; });

        int max_so_far = INT_MIN;
        int wipe = 0;

        for (int i = 0; i < intervals.size(); i++) {
            int start = intervals[i][0];
            int end = intervals[i][1];

            if (start >= max_so_far) {
                max_so_far = end;
            } else {
                wipe++;
            }
        }

        return wipe;
    }
};
