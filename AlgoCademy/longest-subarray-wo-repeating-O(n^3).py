'''
Longest Subarray Without Reapeating - O(n3)

Given an input array of integers, find the length of the longest subarray without reapeating integers.

Example

Input: nums = [2, 5, 6, 2, 3, 1, 5, 6]
Output: 5
Explanation: [5, 6, 2, 3, 1] or [6, 2, 3, 1, 5] are both valid and of maximum length 5
'''

class Solution:
    def longestSubarrayWithoutReapeating(self, nums: List[int]) -> int:
        result = 0
        for i in range(len(nums)):
            for j in range(i, len(nums)):
                if nums[j] in nums[i:j]:
                    break
                result = max(len(nums[i:j]) + 1, result)
        return result
