class Solution {
public:
    int partitionString(string s) {
        std::ios_base::sync_with_stdio(false);
        int count=0;
        unordered_set<char>st;
        for(int i=0;i<s.size();i++){
        
            if(st.find(s[i])==st.end())st.insert(s[i]);
            else {
                count++;
                st.clear();
                st.insert(s[i]);
            }
        }
        return count+1;
        
    }
};