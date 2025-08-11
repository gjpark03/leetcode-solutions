class Solution(object):
    def findPeakElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        # INPUT: Array of non-unique , positive, integers
        # OUTPUT: Index where ANY peak element is
        left = 0
        right = len(nums) - 1
        while left < right:
            middle = (left + right) // 2
            if nums[middle] > nums[middle + 1]:
                right = middle # Look on the left side of the array
            else:
                left = middle + 1 # Look on the right side of the array
        return left
