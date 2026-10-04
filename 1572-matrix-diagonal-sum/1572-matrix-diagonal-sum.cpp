class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int total_s = 0;
        for(int i = 0;i<n; i++) {
            total_s += mat[i][i];
            total_s += mat[i][n-1-i];
        }
        if (n%2!=0) {
            total_s -= mat[n/2][n/2];
        }
        return total_s;
    }
};