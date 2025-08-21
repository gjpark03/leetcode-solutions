'''
Given an array of integers, return a new array containing only the unique values.

The resulting array can be in any order.

Example:

Input: [2, 3, 1, 1, 4, 3, -2, 1]
Output: [2, 3, 1, 4, -2]
			

Note:
For this lesson, your algorithm should run in O(n^2) time and use O(n) extra space.
(There are faster solutions which we will discuss in future lessons)
'''

class Solution:
    def removeDuplicates(self, nums: List[int]) -> List[int]:
        uniqueValues = []
        for value in nums:
            if value not in uniqueValues:
                uniqueValues.append(value)
        
        return uniqueValues
