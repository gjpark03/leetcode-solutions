// Given two strings s and t, determine if they are isomorphic.

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapping;
        unordered_set<char> mappedChars;
        
        for(int i = 0; i < s.length(); i++) {
            char src = s[i];
            char dest = t[i];
            
            if(mapping.find(src) != mapping.end()) {
                if(mapping[src] != dest) return false;
            }
            else {
                if(mappedChars.find(dest) != mappedChars.end()) return false;
                mapping[src] = dest;
                mappedChars.insert(dest);
            }
        }
        return true;
    }
};
