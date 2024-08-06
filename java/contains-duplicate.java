/*
Given an integer array nums, return true if any value appears at least twice in the array, 
and return false if every element is distinct.
*/
class Solution {
    public boolean containsDuplicate(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for(int i = 0; i < nums.length; i++) {
            int num = nums[i];
            map.put(num, map.getOrDefault(num, 0) + 1);
        }
        for(int count : map.values()) {
            if(count > 1) {
                return true; 
            }
        }
        return false;
    }
}
