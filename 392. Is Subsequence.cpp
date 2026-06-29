class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        for (char ch : t) {
            if (s[i] == ch) {
                i++;
            }
        }
        return i == s.size();
    }
};
