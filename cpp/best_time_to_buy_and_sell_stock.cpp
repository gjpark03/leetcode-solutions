/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Base case: size of 1
        if(prices.size() == 1) {
            return 0;
        }
        // Base case 2: size of 2
        if(prices.size() == 2) {
            if(prices[1] - prices[0] >= 0) {
                return prices[1] - prices[0];
            } else {
                return 0;
            }
        }
        // Brute force approach
        // Current buy price, check all future values for the max profit.
        // int max_profit = 0;
        // for(int i = 0; i < prices.size() - 1; i++) {
        //     for(int j = i + 1; j < prices.size(); j++) {
        //         if(prices[j] - prices[i] > max_profit) {
        //             max_profit = prices[j] - prices[i];
        //         }
        //     }
        // }
        // return max_profit;
        // Time complexity = O(n^2)
        // Time limit will exceed!
        int max_profit = 0;
        int min_price = INT_MAX;
        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < min_price) {
                min_price = prices[i];
            } else if(prices[i] - min_price > max_profit) {
                max_profit = prices[i] - min_price;
            }
        }
        return max_profit;

        // Time Complexity = O(n)
        // Space Complexity = O(1)
    }
};
