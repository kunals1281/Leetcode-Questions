class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for (int i = 0; i < n; i++) {
            int start = 0;
            int end = n - 1;
            while (start <= end) {
                if (start == end) {
                    if (image[i][start] == 1) {
                        image[i][start] = 0;
                    } else {
                        image[i][start] = 1;
                    }
                } else if (image[i][start] == image[i][end]) {

                    if (image[i][start] == 1) {
                        image[i][start] = 0;
                        image[i][end] = 0;
                    } else {
                        image[i][start] = 1;
                        image[i][end] = 1;
                    }
                }
                start++;
                end--;
            }
        }
        return image;
    }
};