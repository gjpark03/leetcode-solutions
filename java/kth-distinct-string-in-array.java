/*
A distinct string is a string that is present only once in an array.
Given an array of strings arr, and an integer k, return the kth distinct string present in arr. 
If there are fewer than k distinct strings, return an empty string "".
Note that the strings are considered in the order in which they appear in the array.
*/

class Solution {
    public String kthDistinct(String[] arr, int k) {
        HashMap<String, Integer> strings = new HashMap<>();
        int count = 0;
        for(int i = 0; i < arr.length; i++) {
            String s = arr[i];
            if(strings.containsKey(s)) {
                strings.put(s, strings.get(s) + 1);
            } else {
                strings.put(s, 1);
                count++;
            }
        }
        if(count < k) {
            return "";
        }
        int tracker = 0;
        for(int i = 0; i < arr.length; i++) {
            if(strings.get(arr[i]) == 1) {
                tracker++;
                if(tracker == k) {
                    return arr[i];
                }
            }
        }
        return "";
    }
}
