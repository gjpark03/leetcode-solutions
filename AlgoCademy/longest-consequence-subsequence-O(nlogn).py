'''
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

Example 1:

Input: [100, 4, 200, 1, 3, 2]
Output: 4
Explanation: Longest consecutive sequence is [1, 2, 3, 4].
Therefore its length is 4.
'''

class Solution:
    
    def longestConsecutive(self, nums: List[int]) -> int:
        result = 1
        nums.sort()
        
        i = 0
        while i < len(nums):
            currVal = nums[i]
            j = i + 1
            while j < len(nums) and nums[j] <= currVal + 1:
                if nums[j] == currVal + 1:
                    currVal += 1
                j += 1
            result = max(result, currVal - nums[i] + 1)
            i = j
        return result

