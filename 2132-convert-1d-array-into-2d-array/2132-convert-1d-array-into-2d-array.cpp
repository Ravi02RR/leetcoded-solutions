class Solution {
public:
    vector<vector<int>> ans;

    // void helper(vector<int>& original, int m, int n, int idx, vector<int> temp ) {
    //     if (idx == original.size()) {
    //         if (!temp.empty()) {  
    //             ans.push_back(temp);
    //         }
    //         return;
    //     }
        
    //     if (temp.size() == n) { 
    //         ans.push_back(temp);
    //         temp.clear();  
    //     }
        
    //     temp.push_back(original[idx]); 
    //     helper(original, m, n, idx + 1, temp); 
    // }

    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {         
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);
        if (original.size() != m * n) return {};   
        // vector<int> temp;
        // helper(original, m, n, 0, temp);

        int temp=0;
        vector<int>tempArr;

        for(int i=0;i<original.size();i++){
            tempArr.push_back(original[i]);
            temp++;
            if(temp==n){
                ans.push_back(tempArr);
                tempArr.clear();
                temp=0;
            }

        }


        return ans;
    }
};
