/*
  Given a string s, reverse the order of characters in each word within a sentence 
  while still preserving whitespace and initial word order.
  
  Example 1:
  
  Input: s = "Let's take LeetCode contest"
  Output: "s'teL ekat edoCteeL tsetnoc"
  Example 2:
  
  Input: s = "Mr Ding"
  Output: "rM gniD"
*/  
class Solution {
public:
    string reverseWords(string s) {
        // base case: empty string
        if(s.length() == 0) {
            return "";
        }
        // base case: one letter string
        if(s.length() == 1) {
            return s;
        }
        // turn the string into stringstream object
        stringstream ss(s);
        string sol;
        string word;
        while(ss >> word) {
            reverse(word.begin(), word.end());
            sol += word + " ";
        }
        sol.pop_back();
        return sol;
    }
};
