/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. 
If target exists, then return its index. Otherwise, return -1.
You must write an algorithm with O(log n) runtime complexity.
*/

class Solution {
    public int search(int[] nums, int target) {
        int start = 0;
        int end = nums.length - 1;
        return helper(nums, target, start, end);
    }

    public int helper(int[] nums, int target, int start, int end) {
        if(start <= end) {
            int median = start + (end - start) / 2;
            if(nums[median] == target) {
                return median;
            }
            if(nums[median] < target) {
                return helper(nums, target, median + 1, end);
            } 
            else {
                return helper(nums, target, start, median - 1);
            }
        }
        return -1;
    }
}
