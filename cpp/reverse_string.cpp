// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.

class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.empty()) {
            return;
        }
        if(s.size() == 1) {
            return;
        }
        int left = 0;
        int right = s.size() - 1;
        while(left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            // move the pointers towards each other
            left++;
            right--;
        }
    }
};
