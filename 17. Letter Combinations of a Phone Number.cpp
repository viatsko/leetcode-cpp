class Solution {
public:
    void backtrack(string & curr, int idx, const string & digits, const string mappings[10], vector<string>& result) {
        if (curr.size() == digits.size()) {
            result.push_back(curr);
            return;
        }

        int digit = digits[idx] - '0';
        for (int i = 0; i < mappings[digit].size(); i++) {
            curr.push_back(mappings[digit][i]);

            backtrack(curr, idx + 1, digits, mappings, result);

            curr.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        string mappings[10] = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz",
        };
        vector<string> result;

        string curr;

        backtrack(curr, 0, digits, mappings, result);
        return result;
    }
};
