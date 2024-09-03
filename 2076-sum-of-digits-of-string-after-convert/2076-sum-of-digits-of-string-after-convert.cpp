class Solution {
public:
    int getLucky(string s, int k) {
        map<char, string> mp;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            mp[ch] = to_string((ch - 'a') + 1);
        }

        string temp = "";
        for (auto ch : s) {
            temp += mp[ch];
        }

        int ans = 0;
        while (k--) {
            int count = 0;
            for (int i = 0; i < temp.size(); i++) {
                count += temp[i] - '0';
            }
            ans = count;
            temp = to_string(count);
        }

        return ans; 
    }
};
