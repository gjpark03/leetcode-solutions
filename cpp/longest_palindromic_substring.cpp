// Given a string s, return the longest palindromic substring in s.

class Solution {
public:
    string longestPalindrome(string s) {
        // Brute force approach:
        // Iterate through every substring, and check if it is a palindrome
        int n = s.length();
        if(n == 0 || n == 1) {
            return s;
        }
        int max = 1;
        int start = 0;
        int end = 0;
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        // 2D array - where dp[i][j] means substr(i, j) is a palindrone

        for(int i = 0; i < s.length(); i++) {
            // substrings of length 1 are always palindromes
            dp[i][i] = true;
            for(int j = 0; j < i; j++) {
                if(s[j] == s[i] && (i - j <= 2 || dp[j + 1][i - 1])) {
                    dp[j][i] = true;
                    if(i - j + 1 > max) {
                        max = i - j + 1;
                        start = j;
                        end = i;
                    }
                }
            }
        }
        return s.substr(start, end - start + 1);
    }

};
