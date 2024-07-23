class Solution {
    public boolean isPalindrome(int x) {
        String xString = Integer.toString(x);
        for(int i = 0; i < xString.length(); i++) {
            if(i != xString.length() && xString.charAt(i) == xString.charAt(xString.length() - i - 1)) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    }
}
