class Solution {
    public int solution(int N) {
        // write your code in Java SE 8
           int ans = Integer.MAX_VALUE;
        int i = 1;
        
        if (N==1) return 4;
        
        while(i*i <= N) {
            if(N % i == 0) {
                int b = N / i;
                int p = 2 * (i + b);
                if (p < ans) ans = p;
            }
            i++;
        }
        
        return ans;
    }
}
