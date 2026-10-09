class Solution {
public:
    int climbStairs(int n) {
        int first = 1;
        int second = 2;
        int current;
        if (n <= 2) {
            return n;
        }

        for (int i = 3; i <= n; i++) {
            current = first + second;
            first = second;
            second = current;
        }

        return second;
    }
};