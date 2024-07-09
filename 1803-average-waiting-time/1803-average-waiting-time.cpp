class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        // sort(customers.begin(),customers.end());
        double temp = customers[0][0];
        vector<double> v;
        for(int i = 0; i < customers.size(); i++){
           if(customers[i][0]>temp){
            temp=customers[i][0];
           }
            
            double wait = temp +(customers[i][1] - customers[i][0]);
            v.push_back(wait);
            temp += customers[i][1];
        }

        return accumulate(v.begin(), v.end(),0.0) / v.size();
    }
};
