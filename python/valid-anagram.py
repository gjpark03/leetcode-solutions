class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        s_map = {}
        t_map = {}
        for letter in s:
            if letter in s_map:
                s_map[letter] += 1
            else:
                s_map[letter] = 1
        
        for letter in t:
            if letter in t_map:
                t_map[letter] += 1
            else:
                t_map[letter] = 1

        return t_map == s_map
