class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        fixed_string = ""
        fixed_string = s.strip()
        words = fixed_string.split()
        left = 0
        right = len(words) - 1
        while left < right: 
            words[left], words[right] = words[right], words[left]
            left += 1 
            right -= 1
        fixed_string = " ".join(words)
        return fixed_string
