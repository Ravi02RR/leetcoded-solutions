class Solution {
private:
    static bool cmp(vector<int>& a, vector<int>& b) {
        // Sort based on start time
        return a[0] < b[0];
    }

public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        
        sort(intervals.begin(), intervals.end(), cmp);

        vector<vector<int>> res;
        res.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++) {
            vector<int>& last = res.back();
            vector<int>& curr = intervals[i];

            if (curr[0] <= last[1]) { // overlapping
                
                last[1] = max(last[1], curr[1]);
            } else { // not overlapping
                res.push_back(curr);
            }
        }

        return res;
    }
};
