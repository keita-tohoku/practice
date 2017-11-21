//mergeSortは前問（Distinct）参照

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    mergeSort(A,0,N);
    
    if (A[N-1] < 0) {
        return (A[N-1]*A[N-2]*A[N-3]);
    } else {    
    if(A[0] * A[1] > A[N-2] * A[N-3]) {
        return (A[N-1]*A[0]*A[1]);
    } else {
        return (A[N-1]*A[N-2]*A[N-3]);
    }
}
}