class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        int max = 0;
        int sum = 0;
        int l = A.length;
        
        if (l == 1 ) return A[0];
        
        sum = A[0];
        max = A[0];
        
        for (int i = 1; i < l; i++) {
            if (A[i] >= 0 ) {
                if (sum < 0) {
                    sum = A[i];
                } else {
                    sum = sum + A[i];
                }
            } else {
                if (sum < A[i]) {
                    sum = A[i];
                } else {
                    if (max < sum) max = sum;
                    sum = Integer.MIN_VALUE;
                }
            }
        }
        if (max < sum) {
            max = sum;
        }
        
        return max;
    }
}
