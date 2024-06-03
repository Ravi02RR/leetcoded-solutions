class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0;
        int slen = s.length(), tlen = t.length();
        int ans=0;
    
        while (i < slen && j < tlen) {
            if (s[i] == t[j]) {
                j++;
            }
            i++;
        }
        ans=tlen - j;
    
        return ans;
    }
};