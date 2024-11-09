/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
*/

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> sol;

        // sort the array
        sort(nums.begin(), nums.end()); // O(nlogn)

        // iterate over the array with a fixed number
        for(int i = 0; i < nums.size(); i++) {
            // skip duplicates for the fixed number
            if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int fixed_num = nums[i];
            int left = i + 1;
            int right = nums.size() - 1;

            // Step 3: Two-pointer approach to find the other two numbers
            while(left < right) {
                int sum = fixed_num + nums[left] + nums[right];
                if(sum == 0) {
                    sol.push_back({fixed_num, nums[left], nums[right]});
                    left++;
                    right--;
                    // skip duplicates for the left and right pointers
                    while(left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while(left < right && nums[right] == nums[right + 1]) {
                        right--;
                    }
                } else if (sum < 0) {
                    // sum is too small, need bigger numbers
                    left++; 
                } else {
                    // sum is too big, need smaller numbers
                    right--; 
                }
            }
        }
        return sol;
    }
    // Time complexity: O(n^2)
};
