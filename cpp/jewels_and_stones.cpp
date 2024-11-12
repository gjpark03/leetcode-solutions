class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        // Iterate through jewels, adding each character to a set.
        // Iterate through stones and check if the current char exists in the set, if it
        // does then increment the number of stones that are jewels.
        int stones_that_are_jewels = 0;
        set<char> jewels_set;
        for(int i = 0; i < jewels.length(); i++) {
            jewels_set.insert(jewels[i]);
        }
        for(int i = 0; i < stones.length(); i++) {
            if(jewels_set.find(stones[i]) != jewels_set.end()) {
                stones_that_are_jewels++;
            }
        }
        return stones_that_are_jewels;
    }
};
