/*
You are given a string s consisting of lowercase English letters, and an integer k.
First, convert s into an integer by replacing each letter with its position in the alphabet (i.e., replace 'a' with 1, 'b' with 2, ..., 'z' with 26). 
Then, transform the integer by replacing it with the sum of its digits. Repeat the transform operation k times in total.
*/

class Solution {
    public int getLucky(String s, int k) {
        int length = s.length();
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < length; i++) {
            char c = s.charAt(i);
            int cInt = c - 'a' + 1;   
            sb.append(Integer.toString(cInt));      
        }
        String transform = sb.toString();
        int total = 0;
        while(k > 0) {
            total = 0;
            for(int j = 0; j < transform.length(); j++) {
                char c = transform.charAt(j);
                total += (int) (c - '0');
            }
            transform = Integer.toString(total);
            k--;
        }
        return total;
    }
}
