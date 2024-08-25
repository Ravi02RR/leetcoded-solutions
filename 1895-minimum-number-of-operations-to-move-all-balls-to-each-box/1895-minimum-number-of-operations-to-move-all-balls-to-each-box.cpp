class Solution {
public:
    vector<int> ans;
    
    int count(int i, string& boxes) {
        int count = 0;
        for (int j = 0; j < boxes.size(); j++) {
            if (boxes[j] != '0' && j != i) {
                count += abs(j - i);
            }
        }
        return count;
    }
    
    vector<int> minOperations(string boxes) {
        for (int i = 0; i < boxes.size(); i++) {
            ans.push_back(count(i, boxes));
        }
        return ans;   
    }
};
