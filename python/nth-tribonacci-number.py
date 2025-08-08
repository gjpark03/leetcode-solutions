class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n < 2:
            return n
        prev2 = 0
        prev1 = 1
        curr = 1
        for i in range(3, n + 1):
            next = prev2 + prev1 + curr
            prev2 = prev1
            prev1 = curr
            curr = next
        return curr

        
