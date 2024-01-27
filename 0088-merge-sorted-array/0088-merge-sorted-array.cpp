class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        vector<int> res(m + n, 0); 

        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                res[k++] = nums2[j++];
            } else {
                res[k++] = nums1[i++];
            }
        }

       
        while (j < n) {
            res[k++] = nums2[j++];
        }

        
        while (i < m) {
            res[k++] = nums1[i++];
        }

        // Update nums1 with the merged result
        nums1 = res;
    }
};