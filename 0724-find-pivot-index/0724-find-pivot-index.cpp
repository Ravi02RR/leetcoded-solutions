class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>pref(nums.size(),0);
        vector<int>suf(nums.size(),0);

        pref[0]=nums[0];
        suf[nums.size()-1]=nums[nums.size()-1];
        



        for(int i=1;i<nums.size();i++){
            pref[i]=nums[i]+pref[i-1];
        }
        // for(auto ele:pref){
        //     cout<<ele<<" ";
        // }

        for(int i=nums.size()-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i];
        }
        cout<<endl;
        // for(auto ele:suf){
        //     cout<<ele<<" ";
        // }


        for(int i=0;i<nums.size();i++){
            if(pref[i]==suf[i]){
                return i;
                break;
            }
        }

        return -1;
        
    }
};