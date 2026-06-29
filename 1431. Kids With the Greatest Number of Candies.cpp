class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_candies = 0;

        for (auto candy : candies) {
            max_candies = max(candy, max_candies);
        }

        vector<bool> result;
        result.reserve(size(candies));
        for (auto candy : candies) {
            result.push_back(candy + extraCandies >= max_candies);
        }
        return result;
    }
};
