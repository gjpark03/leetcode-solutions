/*
Given an integer array nums, find the subarray with the largest sum, and return its sum.
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Brute force: try every subarray
        // int max_sum = INT_MIN; 
        // for (int i = 0; i < nums.size(); i++) {
        //     int current_sum = 0;
        //     for (int j = i; j < nums.size(); j++) {
        //         current_sum += nums[j];
        //         max_sum = max(max_sum, current_sum); 
        //     }
        // }
        // return max_sum;
        // Time complexity: O(n^2), Space complexity: O(1)

        int max_sum = nums[0]; // Initialize to first element
        int current_sum = 0;   // Initialize current sum to 0

        for(int num : nums) {
            current_sum += num;         // Add current number to current sum
            max_sum = max(max_sum, current_sum); // Update max sum if current sum is larger
            if(current_sum < 0) {
                current_sum = 0; // Reset current sum if it's negative
            }
        }

        return max_sum;
        // Time complexity: O(n), Space complexity: O(1)
    }
};
