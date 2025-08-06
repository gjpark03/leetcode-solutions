class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """

        roman_to_int_map = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 
                            'C': 100,'D': 500, 'M': 1000}

        roman_to_int = 0
        # Loop through the string starting from the back
        for i in range(len(s) - 1, -1, -1):
            # If I am a smaller value appearing after a larger one,
            # Subtract instead of adding.
            if i < len(s) - 1 and roman_to_int_map[s[i]] < roman_to_int_map[s[i + 1]]:
                roman_to_int -= roman_to_int_map[s[i]]
            else:
                roman_to_int += roman_to_int_map[s[i]]

        return roman_to_int
