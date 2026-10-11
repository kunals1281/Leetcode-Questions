class Solution {
public:
    int mirrorDistance(int n) {
        int c = n;
        int rem = 0;
        int ans = 0;
        while (n > 0) {
            rem = n % 10;
            n = n / 10;
            ans = ans * 10 + rem;
        }

        int f = c - ans;

        if (f < 0) {
            return f * (-1);
        }

        return f;
    }
};