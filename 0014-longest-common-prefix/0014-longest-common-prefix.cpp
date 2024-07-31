class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        sort(strs.begin(),strs.end());

        for(int i=0;i<strs.size();i++){
            cout<<strs[i]<<" ";
        }
        string ans="";
        string temp1=strs[0];
        string temp2=strs[strs.size()-1];
        
        for(int i=0;i<min(temp1.size(),temp2.size());i++){
            if(temp1[i]==temp2[i]){
                ans+=temp1[i];
            }
            else break;
        }
        
        return ans;
        
    }
};