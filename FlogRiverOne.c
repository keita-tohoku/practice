int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
       int *B = (int *)calloc(X,sizeof(int));
    
    for (int i = 1; i <= N;i++) {
        if (A[i-1] < X+1 && B[A[i-1]-1] == 0) {
            B[A[i-1]-1] = i;
        }
    }
        
    int max = 0;    
        
    for (int i=0;i< X; i++) {
        if (B[i]==0) {
            return -1;
        }
        else if (B[i] > max) {
            max = B[i];
        }
    }
    return max-1;
}