/*
  Given a string s, reverse only all the vowels in the string and return it.
  The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
*/
class Solution {
public:
    string reverseVowels(string s) {
        if(s.empty()) {
            return s;
        }
        if(s.length() == 1) {
            return s;
        }
        vector<int> indexes;
        vector<char> vowels;
        for(int i = 0; i < s.length(); i++) {
            if(isVowel(s[i])) {
                indexes.push_back(i);
                vowels.push_back(s[i]);
            }
        }
        reverse(vowels.begin(), vowels.end());
        for(int i = 0; i < indexes.size(); i++) {
            s[indexes[i]] = vowels[i];
        }
        return s;
    }

    bool isVowel(char c) {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }
};
