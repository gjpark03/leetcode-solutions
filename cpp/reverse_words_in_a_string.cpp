/*
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. 
The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. 
The returned string should only have a single space separating the words. Do not include any extra spaces.
*/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> sol;
        while(ss >> word) { // this will ignore extra whitespaces
            sol.push_back(word + " ");
        }
        reverse(sol.begin(), sol.end());
        string result;
        for (string& str : sol) {
            result += str;  
        }
        result.pop_back();
        return result;
        // Time complexity: O(n)
        // Space complexity: O(n)
        // Possibly could do O(1) space
    }
};
