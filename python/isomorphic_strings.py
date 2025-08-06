class Solution(object):
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        s_map = {}
        t_map = {}
        for i in range(len(s)):
            s_char = s[i]
            t_char = t[i]
            if ((s_char in s_map and s_map[s_char] != t_char) or
                (t_char in t_map and t_map[t_char] != s_char)):
                return False
            
            s_map[s_char] = t_char
            t_map[t_char] = s_char
        
        return True

        
        
