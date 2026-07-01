class Solution {
public:
    string reversePrefix(string s, int k) {
        string first = s.substr(0, k);
        reverse(first.begin(), first.end());
        string last = s.substr(k);
        return first + last;
    }
};
