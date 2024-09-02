class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string str = countAndSay(n - 1);
        char ch = str[0];
        int freq = 1;
        string ans = "";
        
        for (int i = 1; i < str.length(); i++) {
            char dh = str[i];
            if (ch == dh) {
                freq++;
            } else {
                ans += to_string(freq) + ch;
                freq = 1;
                ch = dh;
            }
        }
        
        ans += to_string(freq) + ch;  
        return ans;
    }
};
