class Solution {
    void helper(string digits, string tem, int idx, vector<string>& ans, string map[]) {
        if (idx >= digits.size()) {
            
            ans.push_back(tem);
           
            return;
        }
        int nums=digits[idx]-'0';
        string val=map[nums];
        for(int i=0;i<val.size();i++){
            tem.push_back(val[i]);
            helper(digits,tem,idx+1,ans,map);
            tem.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) return {};
        vector<string> ans;
        int idx = 0;
        string tem = "";
        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
         helper(digits, tem, idx, ans,map);
        return ans; 
    }
};
