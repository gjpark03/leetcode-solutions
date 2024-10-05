// Given a string s, find the length of the longest substring without repeating characters.

class Solution {
    public int lengthOfLongestSubstring(String s) {
        int startIndex = 0; // index to keep track of the start of the substring
        int maxLength = 0;
        // map to hold the count of each char in the string
        Map<Character, Integer> charIndex = new HashMap<>();
        // loop through each character in the string
        for(int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if(charIndex.containsKey(c) && charIndex.get(c) >= startIndex) {
                // increment the count in the map
                startIndex = charIndex.get(c) + 1;
            }
            charIndex.put(c, i);
            maxLength = Math.max(maxLength, i - startIndex + 1);
        }
        return maxLength;
 
    }
}
