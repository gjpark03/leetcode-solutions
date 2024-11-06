/*
Given a string s, rearrange the characters of s so that any two adjacent characters are not the same.
Return any possible rearrangement of s or return "" if not possible.
*/
  
class Solution {
public:
    string reorganizeString(string s) {
        // if a letter appears more than half the length of the string times, it will be
        // impossible to do such an arrangment.
        vector<int> charCounts(26, 0);
        for(char c : s) {
            charCounts[c - 'a']++;
        }
        // priority queue made up of vectors that are the letter and the frequency
        // ie: (3, 'a')
        priority_queue<vector<int>> pq;
        for(int i = 0; i < 26; i++) {
            if(charCounts[i] > 0) {
                pq.push(vector<int>{charCounts[i], i + 'a'});
            }
        }
        string result;
        while(!pq.empty()) {
            auto first = pq.top();
            pq.pop();
            if(result.empty() || first[1] != result.back()) {
                result += char(first[1]);
                if(--first[0] > 0) {
                    pq.push(first);
                }
            } else {
                if(pq.empty()) {
                    return "";
                }
                auto second = pq.top();
                pq.pop();
                result += char(second[1]);
                if(--second[0] > 0) {
                    pq.push(second);
                }
                pq.push(first);
            }
        }
        return result;
    }
};
