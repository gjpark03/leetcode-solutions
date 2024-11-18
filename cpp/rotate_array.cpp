// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if(n == 0) return; // Handle empty array
        k = k % n; // In case k >= n
        if(k == 0) return; // No rotation needed
        
        // Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};
