/*
  Given two integer arrays nums1 and nums2, return an array of their intersection
  - Each element in the result must be unique and you may return the result in any order.
*/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Brute force solution: add nums1 to a set and find the elements
        // in the set while looping through nums2.
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<int> sol;
        for(auto num : set1) {
            if(set2.find(num) != set2.end()) {
                sol.push_back(num);
            }
        }

        return sol;
    }
};
