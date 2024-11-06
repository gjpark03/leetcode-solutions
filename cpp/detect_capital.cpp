/*
  We define the usage of capitals in a word to be right when one of the following cases holds:
  - All letters in this word are capitals, like "USA".
  - All letters in this word are not capitals, like "leetcode".
  - Only the first letter in this word is capital, like "Google".
  Given a string word, return true if the usage of capitals in it is right.
*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        // BC 1: word is ""
        if(word.length() == 0) { return false; }
        // BC 2: word is either "A" or "a"
        if(word.length() == 1) {
            return true;
        }
        int i = 0;
        char firstLetter = word[i];
        i++;
        if(isupper(firstLetter) && islower(word[i])) {
            while(i < word.length()) {
                if(islower(word[i])) {
                    i++;
                } else {
                    return false;
                }
            }
        } else if(isupper(firstLetter) && isupper(word[i])) {
            while(i < word.length()) {
                if(isupper(word[i])) {
                    i++;
                } else {
                    return false;
                }
            }
        } else if(islower(firstLetter)) {
            while(i < word.length()) {
                if(islower(word[i])) {
                    i++;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};
