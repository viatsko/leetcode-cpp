class Solution {
public:
    void backtrack(vector<vector<int>> & result, vector<int> &current, bitset<11> & used, int n) {
        for (int i = 1; i <= n; i++) {
            if (!used[i]) {
                if (current.size() > 0) {
                    if (i % 2 == 0 && current.back() % 2 == 0) {
                        continue;
                    }
                    if (i % 2 == 1 && current.back() % 2 == 1) {
                        continue;
                    }
                }
                
                used[i] = 1;
                current.push_back(i);
                
                if (current.size() == n) {
                    result.push_back(current);
                } else {
                    backtrack(result, current, used, n);
                }
                
                current.pop_back();
                used[i] = 0;
            }
        }
    }
    
    vector<vector<int>> permute(int n) {
        vector<vector<int>> result;
        vector<int> current;
        bitset<11> used;
        
        backtrack(result, current, used, n);
        
        return result;
    }
};
