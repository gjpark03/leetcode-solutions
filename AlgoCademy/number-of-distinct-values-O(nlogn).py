'''
Number of Distinct Values - O(n log n)

Given an array of integers, count how many distinct values exist in the array.

Example:

Input: [1, 5, -3, 1, -4, 2, -4, 7, 7]
Output: 6
Explanation: the distinct values in the array are [1, 5, -3, -4, 2, 7]
'''

class Solution:
    def distinctValues(self, nums: List[int]) -> int:
        nums.sort()
        distinct = 1
        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                distinct += 1
        return distinct
