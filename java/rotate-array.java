/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

class Solution {
    public void rotate(int[] nums, int k) {
        int length = nums.length - 1;
        k = k % nums.length;
        List<Integer> rotateNums = new ArrayList<>();
        while(k > 0) {
            rotateNums.add(nums[length]);
            length--;
            k--;
        }
        
        Collections.reverse(rotateNums);
        
        for(int i = 0; i <= length; i++) {
            rotateNums.add(nums[i]);
        }
        for(int i = 0; i < nums.length; i++) {
            nums[i] = rotateNums.get(i);
        }
    }
}
