class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        # value, index map
        seen_index_map = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in seen_index_map:
                return [i, seen_index_map[complement]]
            
            seen_index_map[num] = i
        
