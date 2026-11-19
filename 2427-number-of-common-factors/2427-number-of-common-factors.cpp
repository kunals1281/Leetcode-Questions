class Solution {
public:
    int commonFactors(int a, int b) {
        int count = 0;
        int limit = min(a, b);
        for (int x = 1; x <= limit; ++x) {
            if (a % x == 0 && b % x == 0) {
                count++;
            }
        }
        return count;
    }
};