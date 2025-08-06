class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        s = s.replace(" ", "")
        s = s.lower()
        
        fixed_string = ""

        for char in s:
            if char.isalnum():
                fixed_string += char

        left = 0
        right = len(fixed_string) - 1

        while left <= right:
            if fixed_string[left] != fixed_string[right]:
                return False
            left += 1
            right -= 1
        
        return True
