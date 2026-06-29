class Solution {
public:
    int compress(vector<char>& chars) {
        int y = 0;
        for (int i = 0; i < size(chars); i++) {
            int cnt = 1;
            char ch = chars[i];
            while (i < size(chars) - 1 && chars[i + 1] == chars[i]) {
                i++;
                cnt++;
            }
            chars[y++] = ch;
            if (cnt > 1) {
                string res = to_string(cnt);
                for (int j = 0; j < res.size(); j++) {
                    chars[y++] = res[j];
                }
            }
        }
        return y;
    }
};
