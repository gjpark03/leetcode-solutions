/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] sol = new int[2];
        for(int i = 0; i < nums.length; i++) {
            for(int j = 0; j < nums.length; j++) {
                if(i != j) {
                    if(target - nums[i] - nums[j] == 0) {
                        sol[0] = j;
                        sol[1] = i;
                    }
                }
            }
        }
        return sol;
    }
}
