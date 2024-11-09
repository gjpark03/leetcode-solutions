// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

class Solution {
public:
    double myPow(double x, int n) {
        // Brute force approach:
        // Multiply x by itself n times.
        // bool is_negative_exponent = false;
        // if(n < 0) {
        //     n = -n;
        //     is_negative_exponent = true;
        // }
        // double sol = 1.0;
        // for(int i = 0; i < n; i++) {
        //     sol *= x;
        // }
        // if(is_negative_exponent) {
        //     sol = 1 / sol;
        // }
        // return sol;

        // The brute force approach multiples x by itself unneccesarily more than needed.
        // for example, x^6 = x^3 * x^3
        // but the brute force does x^6 = x * x * x * x * x * x
        // for an odd exponent, x^7 = x^3 * x^3 * x (itself * even case)
        
        double sol = 1.0;
        long long abs_n;
        abs_n = abs((long long)n);
        while(abs_n > 0) {
            // x^10, x = 2, n = 10 (2^10)
            // sol = 1 * 4 = 4
            // sol = (4 == 2^2 )* (256 == 2^8) = 1024
            // then at this point, abs_n == 0
            if(abs_n % 2 == 1) {
                sol *= x;
            } 
            // x = 4, n = 5 (ODD)
            // (2^2)^5 == 2^10
            // x = 16, n = 2 (EVEN)
            // (2^4)^2 = 2^8 (sol = 2^2)
            // x = 256 (2^8), n = 1 (ODD) (sol = 2^2)
            x *= x;
            abs_n /= 2;
        }
        if(n < 0) {
            sol = 1 / sol;
        }
        return sol;
    }
};
