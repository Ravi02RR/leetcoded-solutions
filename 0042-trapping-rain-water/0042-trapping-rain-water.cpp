class Solution {
    vector<int> prevGreaterElement(vector<int> &v) {
        int n = v.size();
        vector<int> prev(n);
        prev[0] = -1;
        int maxi = v[0];
        for (int i = 1; i < n; i++) {
            prev[i] = maxi;
            maxi = max(maxi, v[i]);
        }
        return prev;
    }

    vector<int> nextGreaterElement(vector<int> &v) {
        int n = v.size();
        vector<int> nextg(n);
        nextg[n - 1] = -1;
        int maxi = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            nextg[i] = maxi;
            maxi = max(maxi, v[i]);
        }
        return nextg;
    }

public:
    int trap(vector<int>& height) {
        vector<int> prev = prevGreaterElement(height);
        vector<int> nextg = nextGreaterElement(height);
        vector<int> temp(height.size()); 
        int trap = 0;
        for (int i = 0; i < height.size(); i++){
            temp[i]= min(prev[i], nextg[i]);
        }
        for (int i = 0; i < height.size(); i++) {
            
            if (temp[i] != -1 && height[i] < temp[i]) {
                trap += temp[i] - height[i];
            }
        }
        return trap;
    }
};
