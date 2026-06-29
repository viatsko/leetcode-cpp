class Solution {
public:
    int minFlips(int a, int b, int c) {
        bitset<32> ab(a);
        bitset<32> bb(b);
        bitset<32> bc(c);

        int result = 0;
        for (int i = 0; i < 32; i++) {
            if (bc[i] == 0 && (ab[i] != 0 || bb[i] != 0)) {
                result += ab[i] + bb[i];
                ab[i] = 0;
                bb[i] = 0;
            }
            if (bc[i] == 1 && (ab[i] != 1 && bb[i] != 1)) {
                ab[i] = 1;
                result++;
            }
        }
        return result;
    }
};
