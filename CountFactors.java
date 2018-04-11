class Solution {
    public int solution(int N) {
        // write your code in Java SE 8
        int i = 1;
        int res = 0;
        
        while(i * i < N) {
            if (N % i == 0) {
                res += 2;
            }
            i++;
        }
        
        if (i*i == N) res++;
        
        return res;
    }
}
