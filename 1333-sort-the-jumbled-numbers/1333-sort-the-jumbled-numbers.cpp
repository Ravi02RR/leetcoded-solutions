class Solution {
private:
    static bool compare(pair<int,int>p1,pair<int,int>p2){
        if(p1.second==p2.second)return p2.first>p1.first;
        return p2.second>p1.second;
    }
    string change(int n,vector<int>& mapping){
        string temp="";
        string s=to_string(n);
        for(int i=0;i<s.size();i++){
            temp+=to_string(mapping[s[i]-'0']);
        }
        return temp;
    }
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<int>ans;
        vector<pair<int,int>>p;
        for(int i=0;i<nums.size();i++){
            p.push_back({i,stoi(change(nums[i], mapping))});
        }
        sort(p.begin(),p.end(),compare);

        for(auto ele: p){
            ans.push_back(nums[ele.first]);
        }
        
        return ans;
    }
};
