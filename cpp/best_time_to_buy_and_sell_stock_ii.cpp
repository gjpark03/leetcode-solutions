/*
You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the stock at any time. 
However, you can buy it then immediately sell it on the same day.
Find and return the maximum profit you can achieve.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int min_price = INT_MAX;
        // int max_profit = 0;
        // int running_profit = 0;
        // for(int i = 0; i < prices.size(); i++) {
        //     if(prices[i] < min_price) {
        //         min_price = prices[i];
        //     } else if(prices[i] - min_price >= max_profit) {
        //         max_profit = prices[i] - min_price;
        //         running_profit += max_profit;
        //         max_profit = 0;
        //         min_price = prices[i];
        //     }
        // }
        // return running_profit;
        // Time Complexity = O(n)

        // Better solution
        int profit = 0;
        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        return profit;
    }
};
