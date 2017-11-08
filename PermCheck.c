int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
       int* B = (int *)calloc(N,sizeof(int));
    
    for (int i=0;i < N; i++) {
        if (A[i] > N) {
            return 0;
        }
        B[A[i] -1]++;
    }
    
    for (int i =0; i < N;i++) {
        if (B[i] == 0) {
            return 0;
        }
    }
    return 1;
}