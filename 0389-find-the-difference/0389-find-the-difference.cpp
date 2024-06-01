
class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(auto ele:s){
            mp[ele]++;
        }
        char ans;

        for(int i=0;i<t.length();i++){
            if(mp.find(t[i])!=mp.end()){
                mp[t[i]]--;
                if (mp[t[i]] == 0) {
                    mp.erase(t[i]);
                }

            }
            else {
                ans=t[i];
                break;
            }  
        }
        return ans;
    }
};