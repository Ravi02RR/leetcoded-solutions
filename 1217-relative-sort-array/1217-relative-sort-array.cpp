class Solution {
    typedef vector<int> v;
    typedef map<int,int> map;

public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       ios_base::sync_with_stdio(false);
       v ans;
       map mp;

        for(auto ele : arr1){
            mp[ele]++;
        }

        for(int i=0;i<arr2.size();i++){
            int freq=mp[arr2[i]];
            while(freq>=1){
                ans.push_back(arr2[i]);
                freq--;
                
            }
            mp.erase(arr2[i]);
        }

        for(auto ele :mp){
           int frq=ele.second;
           while(frq>=1){
             ans.push_back(ele.first);
             frq--;
           }
        }

        


        return ans;

    }
};