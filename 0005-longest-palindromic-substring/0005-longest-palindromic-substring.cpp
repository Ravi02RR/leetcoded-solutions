class Solution {
public:
    bool isPalindrome(const string &s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
        // string r=reverse(s.begin()+start,s.end()-end);
        // if(s==r){
        //     return true ;

        // }
        // else false;
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        if (n < 2) return s;
        
        for (int len = n; len >= 2; --len) {
            for (int i = 0; i <= n - len; ++i) {
                if (isPalindrome(s, i, i + len - 1)) {
                    return s.substr(i, len);
                }
            }
        }
        string ans=s.substr(0, 1);
        cout<<"count is : "<<ans.size()<<endl;
        return ans;
    }
};