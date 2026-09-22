class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        int x = num + 2 * t;
        if (num > 0) {
            num++;
        }
        return x;
    }
};