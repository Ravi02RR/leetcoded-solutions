class Solution {
public:
    int lengthOfLastWord(string s) {
        vector <string> tokens;
        stringstream check1(s);
     
        string intermediate;
     
    
        while(getline(check1, intermediate, ' '))
        {
            if (!intermediate.empty()) {
                tokens.push_back(intermediate);
            }
        }

        if (tokens.empty()) {
            return 0;
        } else {
            return tokens[tokens.size()-1].size();
        }
    }
};
