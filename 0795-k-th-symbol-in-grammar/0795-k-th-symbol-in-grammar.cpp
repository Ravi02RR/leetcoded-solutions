class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)return 0;
        if(k%2==0){
            int prevAns=kthGrammar(n-1,k/2);
            if(prevAns==0)return 1;
            else return 0;
        }
        else {
            return kthGrammar(n-1,(k/2)+1);
        }
        
    }
};