// Given a roman numeral, convert it to an integer.

class Solution {
public:
    int romanToInt(string s) {
        // int int_value = 0;
        // unordered_map<char, int> numeral_map = {
        //     {'I', 1},
        //     {'V', 5},
        //     {'X', 10},
        //     {'L', 50},
        //     {'C', 100},
        //     {'D', 500},
        //     {'M', 1000}
        // };
        // for(int i = 0; i < s.length(); i++) {
        //     int_value += numeral_map[s[i]];
        //     if(s[i] == 'I' && i + 1 < s.length()) {
        //         if(s[i + 1] == 'V' || s[i + 1] == 'X') {
        //             int_value -= 2;
        //         }
        //     }
        //     if(s[i] == 'X' && i + 1 < s.length()) {
        //         if(s[i + 1] == 'L' || s[i + 1] == 'C') {
        //             int_value -= 20;
        //         }
        //     }
        //     if(s[i] == 'C' && i + 1 <= s.length() - 1) {
        //         if(s[i + 1] == 'D' || s[i + 1] == 'M') {
        //             int_value -= 200;
        //         }
        //     }
        // }
        // return int_value;

        // Can also view Roman Numeral as having 13 unique symbols instead of 7.
        unordered_map<string, int> numeral_map = {
            {"I", 1},
            {"V", 5},
            {"X", 10},
            {"L", 50},
            {"C", 100},
            {"D", 500},
            {"M", 1000},
            {"CM", 900},
            {"CD", 400},
            {"XC", 90},
            {"XL", 40},
            {"IX", 9},
            {"IV", 4}
        };
        int sum = 0;
        int i = 0;
        while(i < s.size()) {
            if(i < s.size() - 1) {
                string doubleSymbol = s.substr(i, 2);
                if(numeral_map.count(doubleSymbol)) {
                    sum += numeral_map[doubleSymbol];
                    i += 2;
                    continue;
                }
            }
            string singleSymbol = s.substr(i, 1);
            sum += numeral_map[singleSymbol];
            i += 1;
        }
        return sum;
    }
};
