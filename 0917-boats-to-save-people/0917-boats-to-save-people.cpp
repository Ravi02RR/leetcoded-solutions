class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boat=0;
        sort(people.begin(),people.end());

        int i=0;
        int j=people.size()-1;

        while(i<=j){
            if(people[j]+people[i]<=limit){
                boat++;
                i++;
                j--;
            }
            else {
                boat++;
                j--;
            }
           
        }
        return boat;
        
    }
};