int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)

    int i;
    double avg2,avg3;
    double min = 10000;
    int num = 0;
    
    if (N==2) { return 0; }
    
    for (i=0; i<N-2;i++) {
     avg2 = (double)((A[i]+A[i+1])/2.0);
     avg3 = (double)((A[i]+A[i+1]+A[i+2])/3.0);
     
     if (avg2 < min) {
        min = avg2;
        num = i;
     }
     if (avg3 < min) {
        min = avg3;
        num = i;
     }
    }
    
    avg2 = (double)((A[N-2] + A[N-1]) / 2.0);
    
    if (avg2 < min) {
        num = N-2;
    }
    
    return num;
}