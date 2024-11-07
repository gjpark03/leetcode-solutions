/*
  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
  You may assume that each input would have exactly one solution, and you may not use the same element twice.
  You can return the answer in any order.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force approach:
        // vector<int> sol;
        // for(int i = 0; i < nums.size(); i++) {
        //     for(int j = 0; j < nums.size(); j++) {
        //         if(i != j) {
        //             if(target - nums[i] - nums[j] == 0) {
        //                 sol.push_back(i);
        //                 sol.push_back(j);
        //                 return sol;
        //             }
        //         }
        //     }
        // }
        // return sol;

        // map to hold the number's value and its index in the vector
        // key, value = (number's value, index in vector)
        unordered_map<int, int> freqMap;
        for(int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]] = i;
        }
        // Loop through vector again
        for(int i = 0; i < nums.size(); i++) {
            // calculate the complement - x + y = target, complement = target - x
            int complement = target - nums[i];
            // make sure x and y are not at the same index, and see if the complement exists
            if(freqMap.find(complement) != freqMap.end() && freqMap[complement] != i) {
                return {i, freqMap[complement]};
            }
        }
        // if not return empty vector
        return {};
        // Time complexity = O(n), traverse list contianing n elements twice
        // hash table lookup = O(1)
        // Space complexity = O(n)
    }
};
