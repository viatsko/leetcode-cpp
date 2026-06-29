class Solution {
private:
    unordered_map<int, long long> cache;
public:
    int tribonacci(int n) {
        cache[0] = 0;
        cache[1] = 1;
        cache[2] = 1;
        for (int i = 3; i <= n; i++) {
            cache[i] = cache[i - 3] + cache[i - 2] + cache[i - 1];
        }
        return cache[n];
    }
};
