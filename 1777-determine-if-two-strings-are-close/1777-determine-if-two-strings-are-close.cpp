class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) return false;

        map<char, int> m1;
        map<char, int> m2;

        for (int i = 0; i < word1.length(); i++) {
            m1[word1[i]]++;
            m2[word2[i]]++;
        }

        for (auto ele : m1) {
            char ch = ele.first;
            if (m2.find(ch) == m2.end()) return false;  
        }

        map<int, int> m3;
        map<int, int> m4;

        for (auto ele : m1) {
            m3[ele.second]++;
        }

        for (auto ele : m2) {
            m4[ele.second]++;
        }

        return m3 == m4; 
    }
};
