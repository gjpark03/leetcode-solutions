/*
  Given a pattern and a string s, find if s follows the same pattern.
  
  Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:
  
  Each letter in pattern maps to exactly one unique word in s.
  Each unique word in s maps to exactly one letter in pattern.
  No two letters map to the same word, and no two words map to the same letter.
*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;
        stringstream ss(s);
        while(ss >> word) {
            words.push_back(word);
        }

        if(pattern.length() != words.size()) {
            return false;
        }

        unordered_map<char, string> pattern_to_word;
        unordered_map<string, char> word_to_pattern;

        for(int i = 0; i < pattern.length(); i++) {
            char current_char = pattern[i];
            string current_word = words[i];
            if(pattern_to_word.find(current_char) != pattern_to_word.end()) {
                if(pattern_to_word[current_char] != current_word) {
                    return false;
                }
            } else {
                if(word_to_pattern.find(current_word) != word_to_pattern.end()) {
                    return false;
                }
                pattern_to_word[current_char] = current_word;
                word_to_pattern[current_word] = current_char;
            }
        }

        return true;

    }
};
