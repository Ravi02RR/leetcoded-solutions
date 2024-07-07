class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
    int ans=numBottles;
      while(numBottles >=numExchange){
        int mod=numBottles % numExchange;
        int div=numBottles / numExchange;
        ans+=div;
        numBottles=mod+div;
    }
      
      
      return ans;


    }
};