// Return the number of groups of special-equivalent strings from words.

class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        int num_groups = 0;
        // Brute force approach: compare every group of strings and check if they are
        // special-equivalent.
        // strings are special equivalent if both even and odd parts match.
        vector<vector<string>> groups;
        for(const string& word : words) {
            bool found = false;
            for(auto& group : groups) {
                if(isSpecialEquivalent(word, group[0])) {
                    group.push_back(word);
                    found = true;
                    break;
                }
            }
            if(!found) {
                groups.push_back(vector<string>{word});
            }
        }
        return groups.size();
    }

    bool isSpecialEquivalent(const string& s1, const string& s2) {
        int n = s1.length();
        string even1, even2, odd1, odd2;
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                even1 += s1[i];
                even2 += s2[i];
            } else {
                odd1 += s1[i];
                odd2 += s2[i];
            }
        }
        sort(even1.begin(), even1.end());
        sort(even2.begin(), even2.end());
        sort(odd1.begin(), odd1.end());
        sort(odd2.begin(), odd2.end());
        return (even1 == even2) && (odd1 == odd2);
    }

};
