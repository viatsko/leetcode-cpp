class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int freq1[26];
        int freq2[26];

        for (auto & ch : word1) {
            freq1[ch - 'a']++;
        }

        for (auto & ch : word2) {
            freq2[ch - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (freq1[i] > 0 && freq2[i] == 0) {
                return false;
            }

            if (freq2[i] > 0 && freq1[i] == 0) {
                return false;
            }
        }

        unordered_map<int, int> frmap;
        for (auto & freq: freq1) {
            frmap[freq]++;
        }
        for (auto & freq: freq2) {
            frmap[freq]--;
            if (!frmap[freq]) {
                frmap.erase(freq);
            }
        }

        return frmap.size() == 0;
    }
};
