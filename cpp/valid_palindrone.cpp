/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters 
and removing all non-alphanumeric characters, it reads the same forward and backward.
Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
*/
class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty()) {
            return true;
        }
        if(s.length() == 1) {
            return true;
        }

        string lower;
        for(int i = 0; i < s.length(); i++) {
            if(isalnum(s[i])) {
                lower += tolower(s[i]);
            }
        }
        int left = 0;
        int right = lower.length() - 1;
        while(left < right) {
            if(lower[left] == lower[right]) {
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }
};
