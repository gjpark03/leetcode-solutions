/*
A sentence is a string of single-space separated words where each word consists only of lowercase letters.
A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.
Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.
*/

class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        string word;
        vector<string> result;

        string combinedSentences = s1 + " " + s2;

        stringstream ss(combinedSentences);

        while (ss >> word) {
            wordCount[word]++;
        }

        for(unordered_map<string, int>::iterator it = wordCount.begin(); it != wordCount.end(); ++it) {
            if(it->second == 1) {
                result.push_back(it->first);
            }
        }

        return result;
    }
};
