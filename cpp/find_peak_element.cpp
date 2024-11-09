/*
A peak element is an element that is strictly greater than its neighbors.
Given a 0-indexed integer array nums, find a peak element, and return its index. 
If the array contains multiple peaks, return the index to any of the peaks.
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always 
considered to be strictly greater than a neighbor that is outside the array.
You must write an algorithm that runs in O(log n) time.
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // Brute force
        // But we need an alogrithm thats O(logn) time.
        // for(int i = 0; i < nums.size(); i++) {
        //     bool leftSmaller = (i == 0) || (nums[i] > nums[i - 1]);
        //     bool rightSmaller = (i == nums.size() - 1) || (nums[i] > nums[i + 1]);
            
        //     if(leftSmaller && rightSmaller) {
        //         return i; // Found a peak
        //     }
        // }
        // return -1;
        int left = 0; 
        int right = nums.size() - 1;
        while(left < right) {
            int mid = (left + right) / 2;
            if(nums[mid] > nums[mid + 1]) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;

    }
};
