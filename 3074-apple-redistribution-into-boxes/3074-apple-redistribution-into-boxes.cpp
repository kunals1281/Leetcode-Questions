class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.rbegin(), capacity.rend());
        int apples = 0;
        int use = 0;
        int box = 0;
        int n = apple.size();
        int m = capacity.size();
        for (int i = 0; i < n; i++) {
            apples += apple[i];
        }

        for (int i = 0; i < m; i++) {
            use += capacity[i];
            if (apples <= use) {
                box = i;
                break;
            }
        }
        return box + 1;
    }
};