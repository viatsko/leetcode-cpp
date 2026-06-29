class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> min_cost;
        min_cost.resize(cost.size() + 1);
        for (int i = 2; i < min_cost.size(); i++) {
            int min_1_climb = min_cost[i - 1] + cost[i - 1];
            int min_2_climb = min_cost[i - 2] + cost[i - 2];
            min_cost[i] = min(min_1_climb, min_2_climb);
        }
        return min_cost[min_cost.size() - 1];
    }
};
