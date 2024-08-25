class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int count = 0;
        for(int i=0;i<s.size();i++){
            size_t it=t.find(s[i]);
            int dis=distance(t.begin(),t.begin()+it);
            count+=abs(i-dis);
        }


       

        return count;
    }
};
