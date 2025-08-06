class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        # Slow pointer for subsequence 's'
        # Fast pointer for string 't'

        # If t is shorter than s then s cannot be a subsequence
        if len(t) < len(s):
            return False

        # Loop through each letter of 't', if it matches the letter at 's'
        # Increase the pointer for 's' and 't'
        # If it does not match, increase only the pointer for 't'

        t_pointer = 0
        s_pointer = 0

        while s_pointer < len(s) and t_pointer < len(t):
            if t[t_pointer] == s[s_pointer]:
                s_pointer += 1
            t_pointer += 1

        # Return whether or not we reached the end of the string 's'
        return s_pointer == len(s)


        
