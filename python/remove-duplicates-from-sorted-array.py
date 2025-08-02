class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        if len(nums) <= 0:
            return

        k = 1
        num_to_check = nums[0]
        for num in nums:
            if num != num_to_check:
                nums[k] = num
                k += 1
            num_to_check = num

        return k
