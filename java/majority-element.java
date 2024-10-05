/*
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. 
You may assume that the majority element always exists in the array.
*/

class Solution {
    public int majorityElement(int[] nums) {
        int count = 0;
        int candidate = -1;
        for(int num : nums) {
            if(count == 0) {
                candidate = num;
            }
            if(num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
}
