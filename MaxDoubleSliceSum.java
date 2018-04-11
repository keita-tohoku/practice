class Solution {
    public int solution(int[] A) {
        // write your code in Java SE 8
        int n = A.length;
        int i;
        if (n==3) return 0;
        
        int[] l = new int[n];
        int[] r = new int[n];
        
        l[1]=0;
        r[n-2]=A[n-1];
        int acc1 = 0;
        int acc2 = 0;
        
        for (i=2;i<n-1;i++) {
            if (acc1+A[i-1] < 0){
             acc1 = 0;   
            } else {
                acc1 = acc1 + A[i-1];
            }
            l[i] = acc1;
        }
        
        for (i=n-3;i>0;i--) {
            if (acc2+A[i+1] < 0){
                acc2 = 0;
            } else {
                acc2 = acc2 + A[i+1];
            }
            r[i] = acc2;
        }
        
        int sum = 0;
        
        for (i=1;i<n-2;i++) {
            if (sum < l[i]+r[i]) sum = l[i]+r[i];
        }
    return sum;
        
    }
}
