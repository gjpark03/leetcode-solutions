class Solution(object):
    def merge(self, nums1, m, nums2, n):
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        i = m - 1 # Last index in nums1
        j = n - 1 # Last index in nums2
        k = len(nums1) - 1 # Last index of whole array
        while j >= 0 and i >= 0:
            if nums2[j] >= nums1[i]:
                nums1[k] = nums2[j]
                k -= 1
                j -= 1
            else:
                nums1[k] = nums1[i]
                i -= 1
                k -= 1
                
        while j >= 0:
            nums1[k] = nums2[j]
            j -= 1
            k -= 1
