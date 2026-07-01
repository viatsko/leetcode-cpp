class Solution {
public:
    int totalDistance(string s) {
        vector<vector<char>> keyboard = {
            {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
            {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'},
            {'z', 'x', 'c', 'v', 'b', 'n', 'm'},
        };

        unordered_map<char, pair<int, int>> mp;

        for (int i = 0; i < keyboard.size(); i++) {
            for (int j = 0; j < keyboard[i].size(); j++) {
                mp[keyboard[i][j]] = {i, j};
            }
        }

        int result = 0;
        s = 'a' + s;
        for (int i = 1; i < s.size(); i++) {
            result += abs(mp[s[i - 1]].first - mp[s[i]].first) + abs(mp[s[i - 1]].second - mp[s[i]].second);
            //cout << result << endl;
        }
        return result;
    }
};
