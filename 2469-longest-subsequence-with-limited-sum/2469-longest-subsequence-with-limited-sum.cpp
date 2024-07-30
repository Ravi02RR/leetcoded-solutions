class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();
        int m = queries.size();

        sort(nums.begin(), nums.end());

        for (int i = 1; i < n; i++) {
            nums[i] = nums[i - 1] + nums[i];
        }

        vector<int> ans(m);

        for (int i = 0; i < m; i++) {
            int val = queries[i];
            int temp = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] > val) break;
                temp++;
            }
            ans[i] = temp;
        }

        return ans;
    }
};
