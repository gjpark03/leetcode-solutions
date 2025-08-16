'''
Print X - O(n^2)

Given a positive integer n print matrix containing an X as in the example below:

Print X - O(n2)

Given a positive integer n print matrix containing an X as in the example below

Example:
  Input: n = 5
  Output:
  x---x
  -x-x-
  --x--
  -x-x-
  x---x
  Explanation:
  Each line contains exactly n = 5 characters and two 'x's.
  Each diagonal contains 'x'
  
'''
class Solution:
    def buildString(self, n, firstX, secondX):
        string = ""
        for i in range(n):
            if i == firstX or i == secondX:
                string += "x"
            else:
                string += "-"
        return string
                
    def printX(self, n: int):
        firstX = 0
        secondX = n - 1
        for i in range(n):
            print(self.buildString(n, firstX, secondX))
            firstX += 1
            secondX -= 1
    
