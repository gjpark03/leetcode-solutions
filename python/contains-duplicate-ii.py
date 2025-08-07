class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        nums_map = {}
        # Map of values to its index
        # Maps can be used to tell when a duplicate appears!
        for i, j in enumerate(nums):
            if j in nums_map and i - nums_map[j] <= k:
                return True
            nums_map[j] = i
        return False

                
