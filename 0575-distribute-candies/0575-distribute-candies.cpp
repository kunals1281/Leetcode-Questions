class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int max_candy = n / 2;
        int candy = 0;

        for (int i = 0; i < n; i++) {
            bool found = false;

            for (int j = 0; j < i; j++) {
                if (candyType[i] == candyType[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                candy++;
            }
        }

        if (candy > max_candy) {
            return max_candy;
        }

        return candy;
    }
};