class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        # INPUTS:
        # - Sorted, Distinct Array of Integers
        # - Target Integer
        # OUTPUT:
        # - Index of the target (if found)
        # - else Index where it would be
        # CONSTRAINTS:
        # - Time: O(log(N))
        # - nums can be negative
        # - there is always one element in the array
        # QUESTIONS:
        # is the target also distinct? Is there a case where its not
        
        left, right = 0, len(nums) - 1
        while left <= right:
            pivot = (left + right) // 2
            if nums[pivot] == target:
                return pivot
            if target < nums[pivot]:
                right = pivot - 1
            else:
                left = pivot + 1
        return left 



        
