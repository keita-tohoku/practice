int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int c = 0;
    int res = 0;
    
    for ( int i = 0; i < N; i++) {
        if (res > 1000000000) {
            return -1;
        }
        if (A[i] == 0) {
            c++;
        } else {
        res = res + c;
        }
    }
    
    return res;
}