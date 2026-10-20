class Solution {
    public int pivotInteger(int n) {
        int start = 1;
        int end = n;
        if (n==1) {
            return 1;
        }
        else if (n < 8) {
            return -1;
        }
        int left_sum = 1;
            int right_sum = n;

        while (start <= end) {
            
            if (left_sum < right_sum) {
                start++;
                left_sum += start;
            } else {
                end--;
                right_sum += end;
            }

            if (start == end && left_sum == right_sum) {
                return start;
            }
        }
        return -1;
    }
}