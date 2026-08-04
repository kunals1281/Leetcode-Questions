class Solution { 
public: 
    int mySqrt(int x) { 
        if (x < 2) { 
            return x; 
        } 
        
        int start = 1; // Explicitly initialized to 1
        int end = x; 
        int mid, ans = 0; // Initialized to 0 to prevent returning garbage memory
        
        while (start <= end) { 
            mid = start + (end - start) / 2; // Prevents potential integer overflow
            
            if (mid == x / mid) { 
                ans = mid; 
                break; 
            } else if (mid < x / mid) { 
                ans = mid; 
                start = mid + 1; 
            } else { 
                end = mid - 1; 
            } 
        } 
        return ans; 
    } 
};
