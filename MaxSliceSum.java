class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
      int max = Integer.MIN_VALUE;
      int l = A.length;
      int[] B = new int[l];
        
      if (l == 1 ) return A[0];
        
      B[0] = A[0];
        
      for (int i = 1; i < l; i++) {
          if (B[i-1] + A[i] > A[i]) {
              B[i] = B[i-1] + A[i];
          } else {
              B[i] = A[i];
          }
      }
        
      for (int i = 0; i < l; i++) {
          if (max < B[i]) max = B[i];
      }
        
    return max;  
    }
}
