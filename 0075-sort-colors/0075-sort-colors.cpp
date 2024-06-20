class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zidx = 0, twoIdx = nums.size() - 1, i = 0;
        while (i <= twoIdx) {
            if (nums[i] == 0) {
                swap(nums[i], nums[zidx]);
                zidx++;
                i++;
            } else if (nums[i] == 2) {
                swap(nums[i], nums[twoIdx]);
                twoIdx--;
            } else {
                i++;
            }
        }
    }
};