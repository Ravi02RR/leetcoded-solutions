class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n <= 1) return 1;
        
        sort(intervals.begin(), intervals.end());
        
        int count = 0;
        int end = intervals[0][1];
        
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] <= end) {
                count++;
                end = min(end, intervals[i][1]);
            } else {
                end = intervals[i][1];
            }
        }
        
        return intervals.size()-count;
    }
};