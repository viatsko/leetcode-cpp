class Solution {
public:
    string removeStars(string s) {
        string result;
        for (auto& ch :s) {
            if (ch == '*') {
                result.pop_back();
            } else {
                result += ch;
            }
        }

        return result;
    }
};
