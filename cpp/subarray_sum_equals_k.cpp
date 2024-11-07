/*
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
A subarray is a contiguous non-empty sequence of elements within an array.
*/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // brute force approach
        // int count = 0;
        // int n = nums.size();
        // for(int i = 0; i < n; i++) {
        //     int sum = 0;
        //     for(int j = i; j < n; j++) {
        //         sum += nums[j];
        //         if(sum == k) {
        //             count++;
        //         }
        //     }
        // }
        // return count;
        unordered_map<int, int> prefixSum;
        int count = 0;
        prefixSum[0] = 1; // so that subarrays beginning at the first (0th) index can be accounted for
        int runningSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            runningSum += nums[i];
            // [1, 2, 3] k = 3
            if(prefixSum.find(runningSum - k) != prefixSum.end()) {
                count += prefixSum[runningSum - k];
            }
            prefixSum[runningSum]++;
        }
        return count;
    }

    // Time complexity = O(n)
    // Hash map operations are O(1)
    // Space complexity = O(n)
};
