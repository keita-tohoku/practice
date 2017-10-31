int solution(int N) {
    // write your code in C99 (gcc 6.2.0)
    // you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

    int* A = (int *)calloc(32, sizeof(int));    
    
    int M = N;
    int f = 0;
    
    int i = 0;
    while(M>= 1){
    A[i++] = M % 2;
    M = M / 2;
  }

    int length = 0;
    int max = 0;
    for (int j = i; j >= 0; j--){
        if (A[j] == 1 && f == 0){
            f = 1;
        } else if (A[j] == 0 && f == 1){
            length = length + 1;
        } else if (A[j] == 1 && f == 1){
            if (max < length) {
                max = length;
                length = 0;
            } else {
                length = 0;
            }
        }
    }
    
    return max;   
}