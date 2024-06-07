class Solution {
public:
    int maxSatisfied(vector<int>& cus, vector<int>& g, int k) {

        int n=cus.size();

        int prevLoss=0;
        for(int i=0;i<k;i++){
            if(g[i]==1)prevLoss+=cus[i];
        }
        int maxLoss=prevLoss;
        int idx=0;

        int i=1;
        int j=k;
        while(j<n){ 
           
            if(g[j]==1)prevLoss+=cus[j];
            if(g[i-1]==1)prevLoss-=cus[i-1];
            if(maxLoss<prevLoss){
                maxLoss=prevLoss;
                idx=i;
            }
            i++;
            j++;
        }

        for(int i=idx;i<idx+k;i++){
            g[i]=0;
        }

        int sum=0;
        for(int i=0;i<n;i++){
            if(g[i]!=1)sum+=cus[i];
        }


        return sum;

        
    }
};