class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if (n == 0) {
            return true;
        }
        int free_spots = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            int left_is_free = i == 0 || flowerbed[i - 1] == 0;
            int right_is_free = i == flowerbed.size() - 1 || flowerbed[i + 1] == 0;

            if (flowerbed[i] == 0 && left_is_free && right_is_free) {
                flowerbed[i] = 1;
                free_spots++;
                if (free_spots == n) {
                    return true;
                }
            }
        }

        return false;
    }
};
