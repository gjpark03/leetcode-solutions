class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        magazine_map = {}
        for char in magazine:
            if char in magazine_map:
                magazine_map[char] += 1
            else:
                magazine_map[char] = 1

        for letter in ransomNote:
            if letter in magazine_map and magazine_map[letter] > 0:
                magazine_map[letter] -= 1
            else:
                return False

        return True
