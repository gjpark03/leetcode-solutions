'''
Given an array of strings, group the anagrams together. You can return the answer in any order.

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
using all the original letters exactly once.
'''
class Solution:
    def groupAnagrams(self, strings: List[str]) -> List[List[str]]:
        strings.sort(key = lambda word: str(sorted(word)))
        result = []
        currentGroup = []
        for i in range(0, len(strings)):
            currentGroup.append(strings[i])
            if i == len(strings) - 1 or sorted(strings[i]) != sorted(strings[i + 1]):
                result.append(currentGroup)
                currentGroup = []
            

        return result
