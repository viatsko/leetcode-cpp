class Solution {
public:
    bool isVowel(char ch) {
        char lch = tolower(ch);
        return lch == 'a' || lch == 'e' || lch == 'i' || lch == 'o' || lch == 'u';
    }

    string reverseVowels(string s) {
        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            while (l < r && !isVowel(s[l])) {
                l++;
            }
            while(l < r && !isVowel(s[r])) {
                r--;
            }
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++;
            r--;
        }

        return s;
    }
};
