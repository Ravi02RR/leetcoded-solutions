
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int i=0;
        char ans;
        while(i<s.length()){
            if(s[i]!=t[i]){
                ans=t[i];
                break;
            }
            i++;
        }
        if (!ans){
            ans=t[s.size()];

        }   

        return ans;
        
    }
};