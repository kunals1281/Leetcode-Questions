class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int x = left; x <= right; ++x) {
            bool covered = false;
            for (const auto& range : ranges) {
                if (x >= range[0] && x <= range[1]) {
                    covered = true;
                    break;
                }
            }
            if (!covered) {
                return false;
            }
        }
        return true;
    }
};