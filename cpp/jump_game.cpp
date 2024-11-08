/*
You are given an integer array nums. You are initially positioned at the array's first index, and each element 
in the array represents your maximum jump length at that position.
Return true if you can reach the last index, or false otherwise.
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        // ex: [2, 3, 1, 1, 4], last_index = 4
        int last_index = nums.size() - 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            if(i + nums[i] >= last_index) {
                last_index = i;
            }
        }
        return last_index == 0;
    }
};
