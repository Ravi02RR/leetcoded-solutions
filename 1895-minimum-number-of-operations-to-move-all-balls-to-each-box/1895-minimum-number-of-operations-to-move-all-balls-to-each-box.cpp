class Solution {
public:
    vector<int> ans;

    vector<int> minOperations(string boxes) {
        vector<int> temp;
        for (int i = 0; i < boxes.size(); i++) {
            if (boxes[i] == '1') temp.push_back(i);
        }
        for (int i = 0; i < boxes.size(); i++) {
            int res = 0;
            for (int j = 0; j < temp.size(); j++) {
                res += abs(i - temp[j]);
            }
            ans.push_back(res);
        }
        
        return ans;
    }
};
