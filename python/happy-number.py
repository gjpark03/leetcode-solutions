class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        seen = set()
        total_sum = 0
        while n != 1 and n not in seen:
            seen.add(n)
            total_sum = 0
            while n > 0:
                digit = n % 10
                n = n // 10
                total_sum += digit**2

            n = total_sum
        
        return n == 1
        
