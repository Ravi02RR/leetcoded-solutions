class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(auto ele: arr) {
            ele = ((ele%k)+k)%k;
            mp[ele]++;
        }  
        if(mp.find(0) != mp.end()) {
            if(mp[0] % 2 != 0) return false;
            mp.erase(0);
        }

        for(auto ele : mp) {
            int x = ele.first;
            int rem = (k - x) % k;
            if(mp.find(rem) == mp.end()) return false;
            if(mp[ele.first] != mp[rem]) return false;
        } 
        return true;
    }
};
