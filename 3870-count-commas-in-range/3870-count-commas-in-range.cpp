#include <algorithm>

class Solution {
public:
    int countCommas(int n) {
        int totalCommas = 0;
        
        // Commas appear at 1,000+, 1,000,000+, etc.
        // We add the count of numbers that cross each comma threshold.
        if (n >= 1000)       totalCommas += (n - 1000 + 1); // First comma
        if (n >= 1000000)    totalCommas += (n - 1000000 + 1); // Second comma
        if (n >= 1000000000) totalCommas += (n - 1000000000 + 1); // Third comma
        
        return totalCommas;
    }
};
