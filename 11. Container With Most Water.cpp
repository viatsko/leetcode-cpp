class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;

        int l = 0;
        int r = height.size() - 1;

        while (l < r) {
            int w = r - l;
            int h = min(height[l], height[r]);
            int area = w * h;
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
            result = max(result, area);
        }

        return result;
    }
};
