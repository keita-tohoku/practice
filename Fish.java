// you can also use imports, for example:
// import java.util.*;
import java.util.LinkedList;
// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(int[] A, int[] B) {
        // write your code in Java SE 8
    int n = 0;
    LinkedList<Integer> arr1 = new LinkedList<>();
    LinkedList<Integer> arr2 = new LinkedList<>();
    int size = A.length;

    if (size == 1) return 1;
    int count = 0;    
        
    arr1.add(A[0]);
    arr2.add(B[0]);
    if (B[0]== 1) count++;
    
    // B[k] == 0 then fish flows upstream
    // B[k] == 1 then fish flows downstream
    for (int i = 1; i < size; i++) {
        if (B[i] == 1) {
            arr1.add(A[i]);
            arr2.add(B[i]);
            count++;
        } else if (B[i] == 0 && arr2.get(arr2.size()-1) == 1) {
            while(true) {
                if (count == 0) {
                    arr1.add(A[i]);
                    arr2.add(B[i]);
                    break;
                }
                if (A[i] > arr1.get(arr1.size()-1)) {
                    arr1.remove(arr1.size()-1);
                    arr2.remove(arr2.size()-1);
                    count--;
                } else {
                    break;
                }
            }
        } else {
            arr1.add(A[i]);
            arr2.add(B[i]);
        }
    }
    
    return arr1.size();
    }
}