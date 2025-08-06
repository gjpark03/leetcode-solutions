class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """

        longest_prefix = strs[0]
        for i in range(1, len(strs)):
            word = strs[i]
            while word.find(longest_prefix) != 0:
                longest_prefix = longest_prefix[:-1]

        
        return longest_prefix
