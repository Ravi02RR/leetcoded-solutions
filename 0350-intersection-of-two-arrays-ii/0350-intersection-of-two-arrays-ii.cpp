class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
     vector<int>ans;
 
     unordered_map<int,int>mp;
     for(auto ele:nums1){
        mp[ele]++;
     }
     for(int i=0;i<nums2.size();i++){

        if(mp.find(nums2[i])!=mp.end()){
            if(mp[nums2[i]]>=1){
            ans.push_back(nums2[i]);
            mp[nums2[i]]--;
            }
            
        }

     }
     return ans;



    }
};