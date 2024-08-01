class Solution {
public:
    int countSeniors(vector<string>& s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            char one=s[i].at(11);
            char two=s[i].at(12);
            int temp=(one-'0')*10+two-'0';
            if(temp>60)ans++;
            
        }
         return ans;

        
    }
};