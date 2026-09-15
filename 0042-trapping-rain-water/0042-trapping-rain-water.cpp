class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax = 0, rightmax = 0;
        int maxheight = height[0];
        int index = 0;
        int water = 0;

        // max height
        for (int i = 0; i < n; i++) {
            if (height[i] > maxheight) {
                maxheight = height[i];
                index = i;
            }
        }
        // left part
        for (int i = 0; i < index; i++) {
            if (height[i] < leftmax) {
                water += leftmax - height[i];
            }

            else {
                leftmax = height[i];
            }
        }
        // right part
        for (int i = n - 1; i > index; i--) {
            if (rightmax > height[i]) {
                water += rightmax - height[i];
            } else {
                rightmax = height[i];
            }
        }
        return water;
    }
};