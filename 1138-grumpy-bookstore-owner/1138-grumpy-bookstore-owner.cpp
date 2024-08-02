class Solution {
public:
    int maxloss(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int idx = 0;
        int max_loss = 0;
        int current_loss = 0;

        // Initial loss calculation for the first 'minutes' interval
        for (int i = 0; i < minutes; i++) {
            current_loss += (grumpy[i] == 1) ? customers[i] : 0;
        }
        max_loss = current_loss;

        int n = customers.size();
        int i = 1;
        int j = minutes;

        // Sliding window to find the maximum loss interval
        while (j < n) {
            current_loss += (grumpy[j] == 1) ? customers[j] : 0;
            current_loss -= (grumpy[i - 1] == 1) ? customers[i - 1] : 0;

            if (current_loss > max_loss) {
                max_loss = current_loss;
                idx = i;
            }
            i++;
            j++;
        }
        return idx;
    }

    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int ans = 0;

        // Calculate the total satisfaction without any change
        for (int i = 0; i < customers.size(); i++) {
            if (grumpy[i] == 0) {
                ans += customers[i];
            }
        }

        // Find the interval with the maximum loss
        int idx = maxloss(customers, grumpy, minutes);
        cout << "index " << idx << endl;

        // Calculate the additional satisfaction by flipping the grumpy values in the identified interval
        for (int i = idx; i < idx + minutes; i++) {
            if (grumpy[i] == 1) {
                ans += customers[i];
            }
        }

        return ans;
    }
};


