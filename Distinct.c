// https://qiita.com/hiso/items/5c36f50c7de61fe870a2
// こちらのサイトよりマージソートを引用しました

void mergeSort(int *N,int left,int right); 
void merge(int *N, int left, int mid, int right);
    

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    mergeSort(A,0,N);
    
    int sum = 0;
    int acc = -1000001;
    
    for(int i = 0; i < N; i++) {
        if (A[i] > acc) {
            sum++;
            acc = A[i];
        }
    }
    
    return sum;
        
}

void mergeSort(int *N, int left, int right) {
    int mid;
    
    if (left + 1 < right) {
        mid = (left+right)/2;
        mergeSort(N,left,mid);
        mergeSort(N,mid,right);
        merge(N,left,mid,right);
    }
}
int count = 0;

void merge(int *N, int left, int mid, int right) {
  int n1,n2,i,j,k;
  int *L,*R;
  n1=mid-left;
  n2=right-mid;
  L=(int *)malloc(sizeof(int)*(n1+1));
  R=(int *)malloc(sizeof(int)*(n2+1));
  for(i=0;i<=n1-1;i++){
    L[i]=N[left+i];
  }
  for(j=0;j<=n2-1;j++){
    R[j]=N[mid+j];
  }
  L[n1]=1000000;
  R[n2]=1000000;
 i=0;
  j=0;
  for(k=left;k<=right-1;k++){
   if(L[i]<=R[j]){
      N[k]=L[i];
      i++;
      count++;
    }
    else{
      N[k]=R[j];
      j++;
      count++;
    }
  }
  free(L);
  free(R);
}
