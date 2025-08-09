class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        for i in range(len(digits)):
            index = len(digits) - 1 - i
            if digits[index] == 9:
                # Need to do more work
                digits[index] = 0
            else:
                digits[index] += 1
                return digits
        
        return [1] + digits # only 9s
        
