struct Results solution(char *S, int P[], int Q[], int M) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
     int N = sizeof(S);
    int *R=(int *)calloc(N,sizeof(int));
    
    for (int i=0;  i < N; i++) {
        if (S[i] == 'A') {
            R[i] = 1;
        } else if (S[i] =='C') {
            R[i] = 2;
        } else if (S[i] == 'G') {
            R[i] = 3;
        } else { R[i] = 4; }
    }
    
    int *N1=(int *)calloc(N,sizeof(int));
    int *N2=(int *)calloc(N,sizeof(int));
    int *N3=(int *)calloc(N,sizeof(int));
    
    int dist1 = 0;
    int dist2 = 0;
    int dist3 = 0;
 
    if (R[N-1] == 2) {
        dist1 = 1;
    } else if (R[N-1] == 3 ) {
        dist1 = 1;
        dist2 = 1;
    } else if (R[N-1] == 4) {
        dist1 = 1;
        dist2 = 1;
        dist3 = 1;
    }
    
    for ( int i = N-2; i >= 0; i--) {
        if (R[i] == 1) {
            N1[i] = 0;
            N2[i] = 0;
            N3[i] = 0;
        } else if (R[i] == 2) {
                dist1++;
                N1[i] = dist1;
                N2[i] = 0;
                N3[i] = 0;
        } else if (R[i] == 3) {
                dist1++;
                dist2++;
                N1[i] = dist1;
                N2[i] = dist2;
                N3[i] = 0;
        } else {
                dist1++;
                dist2++;
                dist3++;
                N1[i] = dist1;
                N2[i] = dist2;
                N3[i] = dist3;
            }
            if (N1[i] == 0) dist1 = 0;
            if (N2[i] == 0) dist2 = 0; 
            if (N3[i] == 0) dist3 = 0;
    }
    
    N1[N-1] = 0;
    N2[N-1] = 0;
    N3[N-1] = 0;
    
    int *A = (int *)calloc(M,sizeof(int));
    
    for (int i = 0; i < M; i++){
        int dist = Q[i] - P[i];
        
        if (R[P[i]] == 1) {
            A[i] = 1;
        } else if (R[P[i]] == 2) {
            if (dist >= N1[P[i]]) {
                A[i] = 1;
            } else { A[i] = 2; }
        } else if (R[P[i]] == 3) {
            if (dist >= N1[P[i]]) {
                A[i] = 1;
            } else if (dist >= N2[P[i]]) {
                A[i] = 2;
            } else { A[i] = 3; }
        } else {
            if (dist >= N1[P[i]]) {
                A[i] = 1;
            } else if (dist >= N2[P[i]]) {
                A[i] = 2;
            } else if (dist >= N3[P[i]]) {
                A[i] = 3;
            } else { A[i] = 4; }
        }
    }
    
    free(R);
    free(N1);
    free(N2);
    free(N3);
            
    result.A = A;
    result.M = M;
    return result;
}