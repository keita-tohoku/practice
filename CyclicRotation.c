// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    int i = 0;
    int acc;
    
    for (int k=0; k < K; k++) {
        acc = A[N-1];
        for (i = N-1; i > 0; i--) {
            A[i] = A[i-1];
        }
        A[0] = acc;
    }
    
    result.A = A;  
    result.N = N;
    return result;
}