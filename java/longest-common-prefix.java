/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/
class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        
        String sol = strs[0];
        for (int i = 1; i < strs.length; i++) {
            String compare = strs[i];
            int j = 0;
            while (j < sol.length() && j < compare.length() && sol.charAt(j) == compare.charAt(j)) {
                j++;
            }
            sol = sol.substring(0, j);
            if(sol.isEmpty()) {
                break;
            }
        }
        return sol;
    }
}
