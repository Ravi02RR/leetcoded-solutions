class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans=numBottles;
        int temp=numBottles;
        while(temp>=numExchange){
            ans+=1;
            temp-=numExchange;
            numExchange++;
            temp++;

        }
        return ans;
    }
};