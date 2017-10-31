// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    int max = 0;
    
    for (int k = 0; k < N; k++){
        if (A[k] > max){
            max = A[k];
        }
    }
    
    int *B = (int*)calloc(max,sizeof(int));
    
    for (int i = 0; i < N; i++) {
    B[A[i] - 1]++;    
    }
    
    int j = 0;
    
    while(1){
        if (B[j] % 2 == 1) {
            return j + 1 ;
        }
        j++;
    }
    
}