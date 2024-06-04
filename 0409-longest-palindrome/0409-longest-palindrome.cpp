class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto ele : s) {
            mp[ele]++;
        }

        int count = 0;
        bool hasOdd = false;  

        for(auto it = mp.begin(); it != mp.end(); it++) {
            if(it->second % 2 == 0) {
                count += it->second;
            } else {
                count += it->second - 1;  
                hasOdd = true;
            }
        }

        if(hasOdd) {
            count++;  
        }

        return count;
    }
};
