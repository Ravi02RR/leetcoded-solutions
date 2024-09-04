#include <vector>
#include <algorithm>

class Solution {
private:
    void combinationSum2Helper(vector<vector<int>> &ans, vector<int> &v, vector<int>& candidates, int target, int idx) {
        if (target == 0) {
            ans.push_back(v);
            return;
        }
        if (target < 0) return;
        for (int i = idx; i < candidates.size(); i++) {
            // Skip 
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }
            v.push_back(candidates[i]);
            combinationSum2Helper(ans, v, candidates, target - candidates[i], i + 1);  
            v.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end()); 
        vector<vector<int>> ans;
        vector<int> v;
        combinationSum2Helper(ans, v, candidates, target, 0);
        return ans;
    }
};
