class Solution:
    def removeDuplicates(self, nums: List[int]) -> List[int]:
        nums.sort()
        p = 0
        for i in range(1, len(nums)):
            if nums[i] != nums[p]:
                nums[p + 1] = nums[i]
                p += 1
        return nums[:p + 1]
