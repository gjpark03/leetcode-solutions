/*
  Write a function to find the longest common prefix string amongst an array of strings.
  If there is no common prefix, return an empty string "".
*/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) {
            return "";
        }
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++) {
            while(strs[i].find(prefix) != 0) {
                // shorten prefix by one until it is found in the word
                prefix = prefix.substr(0, prefix.length() - 1);
            }
        }
        if(prefix.empty()) {
            // all different words
            return "";
        }
        return prefix;
     }
};
