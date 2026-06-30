class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> senators_radiant;
        queue<int> senators_dire;

        for (int i = 0; i < size(senate); i++) {
            if (senate[i] == 'D') {
                senators_dire.push(i);
            } else {
                senators_radiant.push(i);
            }
        }

        int next_round = senate.size();
        while (!senators_radiant.empty() && !senators_dire.empty()) {
            if (senators_radiant.front() < senators_dire.front()) {
                senators_radiant.push(next_round++);
            } else {
                senators_dire.push(next_round++);
            }
            senators_radiant.pop();
            senators_dire.pop();
        }

        return senators_radiant.empty() ? "Dire" : "Radiant";
    }
};
