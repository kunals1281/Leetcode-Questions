class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        sort(piles.rbegin(),piles.rend());

        int sum = 0;
        for(int i = 1; i<2*n/3; i=i+2) {
            sum+=piles[i];
        }
        return sum;
    }
};