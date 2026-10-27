class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int row = 0;
        int max_o = 0;

        for (int i = 0; i < n; i++) {
            int count_o = 0;
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    count_o++;
                }
                if (max_o < count_o) {
                    max_o = max(count_o, max_o);
                    row = i;
                }
            }
        }
        return {row, max_o};
    }
};