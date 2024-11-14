/*
  Write an algorithm to determine if a number n is happy.
  A happy number is a number defined by the following process:
  
  Starting with any positive integer, replace the number by the sum of the squares of its digits.
  Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
  Those numbers for which this process ends in 1 are happy.
  Return true if n is a happy number, and false if not.
*/
class Solution {
public:
    bool isHappy(int n) {

        unordered_set<int> seen;
        while(n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int total_sum = 0;
            while(n > 0) {
                int digit = n % 10;
                n = n / 10;
                total_sum += digit * digit;
            }
            n = total_sum;
        }
        return n == 1;
        // Time complexity: O(n) 
    }
};
