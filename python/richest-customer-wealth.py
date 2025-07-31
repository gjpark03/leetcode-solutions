class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        # integer to store the highest amount so far
        max = -1
        for account in accounts:
            if sum(account) > max:
                max = sum(account)

        return max
        
