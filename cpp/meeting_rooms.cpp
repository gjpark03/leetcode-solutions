// Given an array of meeting time intervals where intervals[i] = [starti, endi], determine if a person could attend all meetings.

class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for(int i = 1; i < intervals.size(); i++) {
            if(intervals[i][0] < intervals[i - 1][1]) {
                return false;
            }
        }
        return true;
        // Time complexity: O(nlogn), Space Complexity: O(1)
    }
};
