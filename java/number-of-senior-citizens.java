/*
You are given a 0-indexed array of strings details. Each element of details provides information about a given passenger c
ompressed into a string of length 15. The system is such that:
- The first ten characters consist of the phone number of passengers.
- The next character denotes the gender of the person.
- The following two characters are used to indicate the age of the person.
- The last two characters determine the seat allotted to that person.
Return the number of passengers who are strictly more than 60 years old.
*/

class Solution {
    public int countSeniors(String[] details) {
        int count = 0;
        for(int i = 0; i < details.length; i++) {
            String detail = details[i];
            if(detail.charAt(11) >= '6' && detail.charAt(12) >= '1' ||
               detail.charAt(11) >= '7') {
                count++;
            }
        }
        return count;
    }
}
