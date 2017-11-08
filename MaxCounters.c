int* increaseN(int* Counter, int num);
int* maxCounter(int* Counter, int size);

struct Results solution(int N, int A[], int M) {
    struct Results result;
    
    int *B = (int *)calloc(N,sizeof(int));
    
    // write your code in C99 (gcc 6.2.0)
    for (int i = 0; i < M; i++) {
        if (A[i] <= N) {
            increaseN(B,A[i]-1);
        } else if (A[i] == N+1) {
            maxCounter(B,N);
        }
    }    
    result.C = B;
    result.L = N;
    return result;
}

int *increaseN(int* Counter, int num) {
    Counter[num]++;
    
    return Counter;
}
    
int *maxCounter(int* Counter, int size) {
    int max = 0;
    for (int i=0;i < size; i++) {
        if (Counter[i] > max) {
            max = Counter[i];
        }
    }
    
    for (int i=0; i < size; i++) {
        Counter[i] = max;
    }
    
    return Counter;   
}