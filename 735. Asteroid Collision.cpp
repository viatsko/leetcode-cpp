class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;

        for (auto & asteroid : asteroids) {
            if (result.empty()) {
                result.push_back(asteroid);
            } else {
                if (result.back() > 0 && asteroid < 0) {
                    while (result.size() > 0 && abs(asteroid) > abs(result.back()) && result.back() > 0) {
                        result.pop_back();
                    }
                    if (result.size() > 0  && abs(asteroid) <= abs(result.back()) && result.back() > 0) {
                        if (abs(asteroid) == abs(result.back())) {
                            result.pop_back();
                        }
                    } else {
                        result.push_back(asteroid);
                    }
                } else {
                    result.push_back(asteroid);
                }
            }
        }

        return result;
    }
};
