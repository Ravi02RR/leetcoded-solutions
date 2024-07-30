class Solution {
public:
    int binary(int n, vector<int>& nums) {
        int ans = -1; 

        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] <= n) {
                ans = mid;
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans + 1;  
    }

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
            ans[i] = binary(val, nums);
        }

        return ans;
    }
};
