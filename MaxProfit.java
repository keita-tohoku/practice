class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        int l = A.length;
        
        if (l < 1) return 0;
        
        int max = A[0];
        int min = A[0];
        int ans = 0;
        
        for (int i = 1; i < l; i++) {
            if (A[i] < min) {
                min = A[i];
                max = A[i];
            } else if (A[i] > max) {
                max = A[i];
                if (ans < max - min) {
                ans = max - min;
                } 
            }
        }
        
        return ans;
        
    }
}
