// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int sum = 0;
    int min = 2000;
    int header = 0;
    int diff = 0;
    
    for (int i = 0; i < N; i++) {
        sum = sum + A[i];
    }
    
    for (int i = 0; i < N-1; i++) {
        if (min == 0) {return 0;}
        else { 
            header = header + A[i];
            diff = abs(header * 2 - sum);
            if (min >= diff) {
                min = diff;
                }
        }
    }
    return min;
}