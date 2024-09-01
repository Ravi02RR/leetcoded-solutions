class Solution {
public:
    vector<string> ans;

    void bnao(int n, int o, int c, string temp) {
        
        if (o == n && c == n) {
            ans.push_back(temp);
            return;
        }
        if (o < n) {
            bnao(n, o + 1, c, temp + '(');
        }
        if (c < o) {
            bnao(n, o, c + 1, temp + ')');
        }
    }

    vector<string> generateParenthesis(int n) {
        bnao(n, 0, 0, "");
        return ans;
    }
};
