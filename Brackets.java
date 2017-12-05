import java.util.LinkedList;
// you can write to stdout for debugging purposes, e.g.
// System.out.println("this is a debug message");

class Solution {
    public int solution(String S) {
        // write your code in Java SE 8
                LinkedList<Character> sta = new LinkedList<>();
        int size = 0;
        int length = S.length();
        
        if (length == 0) {
            return 1;
        } else if ( length == 1) {
            return 0;
        }
        
        for (int i = 0; i < length; i++) {
            if (S.charAt(i) == '(' || S.charAt(i) == '{' || S.charAt(i) == '[' ) {
                sta.add(S.charAt(i));
                size = size+1;
            } else {
                if (size == 0) {
                    return 0;
                } else if (!(bracketCheck(sta.get(size -1) , S.charAt(i)))) {
                    return 0;
                }
                sta.remove(size -1);
                size = size -1;
            }
        }
        
        if (size == 0) return 1;
        
        return 0;
    }
    
    public boolean bracketCheck(char l , char r){
        if ( l == '(' && r == ')' ) return true;
        if ( l == '{' && r == '}' ) return true;
        if ( l == '[' && r == ']' ) return true;
        
        return false;
    }
}