class Solution {
public:
    bool isPowerOfFour(int n) {
        long long temp=4;
        if(n==1)return true;
        for(int i=0;i<=15;i++){
            
            
            if(temp==n){
                return true;
                break;
            }
            temp*=4;
            
        }
        return false;
    }
};