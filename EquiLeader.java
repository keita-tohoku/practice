class Solution {
    
    public int dom(int[] A) {
        int l = A.length;
        int c = 0;
        int acc = -1;
        
        for (int i = 0; i < l; i++) {
            if (c == 0) { 
                acc = A[i];
                c++;
            } else if ( acc == A[i]) {
                c++;
            } else {
                c--;
            }
        }
        int candidate = -1;
        if (c > 0) candidate = acc;
        int leader = -1;
        int count = 0;
        for (int i = 0; i < l; i++) {
            if (A[i] == candidate) { count += 1; }
        }
        if (count > l / 2) {
        leader = candidate;
        }
        return leader;
    }    
    
    public int numLeader(int[] A, int leader) {
        int l = A.length;
        int count = 0;
        
        for ( int i = 0; i < l; i++) {
            if ( A[i] == leader ) {
                count++;
            }
        }    
            
        return count;
    }
            
    
    public int solution(int[] A) {
        int leader = dom(A);
        int l = A.length;
        int n = numLeader(A,leader);
        
        if (leader == -1) {
            return 0;
        }
        
        int count = 0;
        int eCount = 0;
        
        for (int i = 0; i < l-1; i++) {
            if (A[i] == leader) {
                count++;
            }
           if (count > (i+1) / 2 && (n - count) > (l - (i+1)) / 2) {
                eCount++;
            }
        }
        return eCount;
    }
}
