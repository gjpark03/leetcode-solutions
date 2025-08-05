class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit = 0
        for day in range(1, len(prices)):
            price_difference = prices[day] - prices[day - 1]
            if price_difference > 0:
                max_profit += price_difference
        
        return max_profit
            
        
        return max_profit
