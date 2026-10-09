class Solution {
public:
    int findClosest(int x, int y, int z) {
        int first = x - z;
        int second = y - z;
        if (first < 0) {
            first *= -1;
        }
        if (second < 0) {
            second *= -1;
        }

        if (first > second) {
            return 2;
        } else if (second > first) {
            return 1;
        } else {
            return 0;
        }
    }
};