/*
Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
*/

class Solution {
    public double myPow(double x, int n) {
        double sol = 1.0;
        double product = x;
        long N = n;
        if(n < 0) {
            N = -N;
            while(N > 0) {
                if(N % 2 == 1) {
                    sol *= product;
                }
                product *= product;
                N /= 2;
            }
            sol = 1 / sol;
        } else {
            while(N > 0) {
                if(N % 2 == 1) {
                    sol *= product;
                }
                product *= product;
                N /= 2;
            }
        }
        return sol;
    }
}
