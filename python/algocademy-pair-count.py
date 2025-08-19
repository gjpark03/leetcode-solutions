'''
Given two positive integers n and sum, count the number of different pairs of integers (x, y) 
such that 1 <= x, y <= n and x + y equals sum


Input: n = 7, sum = 6
Output: 3
Explanation: There are 3 valid pairs: (1, 5), (2, 4), (3, 3).

Note that pairs such as (1, 5) and (5, 1) are not considered different.
'''
class Solution:
    def countPairs(self, n: int, sum: int) -> int:
        result = 0
        for i in range(1, n):
            for j in range(i, n):
                if i + j == sum:
                    result += 1
        
        return result
            
        
