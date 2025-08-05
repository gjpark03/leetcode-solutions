class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        lowest_price = prices[0]
        max_profit = 0
        for price in prices:
            if price - lowest_price > max_profit:
                max_profit = price - lowest_price
            if price < lowest_price:
                lowest_price = price
        return max_profit
        
            
        
