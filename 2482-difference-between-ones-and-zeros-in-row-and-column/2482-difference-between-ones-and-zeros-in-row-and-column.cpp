class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> diff(n, vector<int>(m, 0));

        vector<int> orow;
        vector<int> ocol;
        vector<int> zrow;
        vector<int> zcol;
        // zeros and one in row
        for (int i = 0; i < n; i++) {
            int cou0 = 0;
            int one1 = 0;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 0) {
                    cou0++;
                }
                if (grid[i][j] == 1) {
                    one1++;
                }
            }
            orow.push_back(one1);
            zrow.push_back(cou0);
        }

        // zeros and one in col
        for (int i = 0; i < m; i++) {
            int cou0 = 0;
            int one1 = 0;
            for (int j = 0; j < n; j++) {
                if (grid[j][i] == 0) {
                    cou0++;
                }
                if (grid[j][i] == 1) {
                    one1++;
                }
            }
            ocol.push_back(one1);
            zcol.push_back(cou0);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                diff[i][j] = orow[i] + ocol[j] - zrow[i] - zcol[j];
            }
        }
        return diff;
    }
};