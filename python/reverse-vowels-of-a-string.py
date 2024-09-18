"""
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

"""

class Solution:
    def reverseVowels(self, s: str) -> str:
        vowels = set('aeiouAEIOU')        
        s_vowels = []
        indexes = []
        s_list = list(s)

        for i in range(len(s)):
            if s_list[i] in vowels:
                s_vowels.append(s[i])
                indexes.append(i)

        s_vowels.reverse()
        index = 0

        for idx, vowel in zip(indexes, s_vowels):
            s_list[idx] = vowel

        return ''.join(s_list)
