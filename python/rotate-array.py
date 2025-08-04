class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k = k % n
        
        for _ in range(k):
            # Rotate by 1
            last = nums[-1]
            for i in range(n-1, 0, -1):
                nums[i] = nums[i-1]
            nums[0] = last

            


        
