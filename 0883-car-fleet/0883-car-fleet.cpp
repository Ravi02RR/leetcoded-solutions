class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int>> v;
        for (int i = 0; i < position.size(); i++) {
            v.push_back({position[i], speed[i]});
        }
        sort(v.begin(), v.end());

        
        for (auto ele : v) {
            cout << ele.first << "->" << ele.second << " ";
        }
        cout << endl;

        stack<double> st;
        for (int i = 0; i < position.size(); i++) {
            double time = (double)(target - v[i].first) / v[i].second;
            st.push(time);
        }

        int final_count = 0;
        
        while (!st.empty()) {
            double tempTime = st.top();
            st.pop();
            final_count++;  

            // Merge cars into the current fleet
            while (!st.empty() && st.top() <= tempTime) {
                st.pop(); 
            }
        }

        return final_count;
    }
};
