/*
You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].
Each element nums[i] represents the maximum length of a forward jump from index i. In other words, 
if you are at nums[i], you can jump to any nums[i + j] where:
   0 <= j <= nums[i] and
   i + j < n
Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        int min_jumps = 0;
        int n = nums.size() - 1;
        int cur_end = 0;
        int cur_far = 0;
        for(int i = 0; i < n; i++) {
            // cur_far = 2, 4
            cur_far = max(cur_far, i + nums[i]);
            if(i == cur_end) {
                min_jumps++;
                // cur_end = 2
                cur_end = cur_far;
            }
        }
        return min_jumps;
    }
};
