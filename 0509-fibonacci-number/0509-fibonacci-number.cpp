class Solution {
public:
    int fib(int n) {
        int last = 0;
        int prev = 1;
        int curr;

        if (n == 0) {
            return last;
        }
        else if (n == 1) {
                return prev;
            }
        else {
            for (int i = 2; i <= n; i++) {
                curr = prev + last;
                last = prev;
                prev = curr;
            }
            return curr;
        }
    }
};