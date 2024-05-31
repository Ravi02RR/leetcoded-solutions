class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<int> st;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(i);
            } else {
                if (!st.empty() && s[st.top()] == '(') {
                    st.pop();
                } else {
                    st.push(i);
                }
            }
        }

        int res = 0;
        int last = s.length();
        while (!st.empty()) {
            int curr = st.top();
            st.pop();
            res = max(res, last - curr - 1);
            last = curr;
        }

        return max(last, res);
    }
};
