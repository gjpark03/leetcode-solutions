class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Brute force solution is to iterate through all substrings, check if
        // they are valid using a set.
        // int max_len = 0;
        // set<char> char_set;
        // for(int i = 0; i < s.length(); i++) {
        //     for(int j = i; j < s.length(); j++) {
        //         if(char_set.find(s[j]) == char_set.end()) {
        //             char_set.insert(s[j]);
        //             if(char_set.size() > max_len) {
        //                 max_len = char_set.size();
        //             }
        //         } else {
        //             if(char_set.size() > max_len) {
        //                 max_len = char_set.size();
        //             }
        //             char_set.clear();
        //             break;
        //         }
        //     }
        // }
        // return max_len;
        // Time complexity: O(N^2), Space Complexity: O(N)

        // Optimized Approach: Sliding Window
        int max_len = 0;
        int left = 0;
        set<char> char_set;
        for(int i = 0; i < s.length(); i++) {
            while(char_set.find(s[i]) != char_set.end()) {
                char_set.erase(s[left]);
                left++;
            } 
            char_set.insert(s[i]);
            max_len = max(max_len, i - left + 1);
            
        }
        return max_len;
    }
};
