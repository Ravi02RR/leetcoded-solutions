class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(int i=0;i<logs.size();i++){
            if(!st.empty()){
                if(logs[i]=="../")st.pop();
            }
            if(logs[i]!="./" && logs[i]!="../"){
                st.push(logs[i]);
            }

        }  
        return st.size();  
    }
};





/*class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        for(int i=0;i<logs.size();i++){
            if(!st.empty()){
                if(logs[i]=="../")st.pop();
            }
            if(logs[i]!="./"){
                st.push(logs[i]);
            }

        }  
        return st.size()-1;  
    }
};*/