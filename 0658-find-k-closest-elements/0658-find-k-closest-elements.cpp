class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int n = arr.size();
        vector<int> v(k);
        
        // case 1
        if (x <= arr[0])
        {
            for (int i = 0; i < k; i++)
            {
                v[i] = arr[i];
            }
            return v;
        }
        
        // case 2
        if (x >= arr[n - 1])
        {
            int i = n - 1;
            int j = k - 1;
            while (j >= 0)
            {
                v[j] = arr[i];
                j--;
                i--;
            }
            return v;
        }

        // Binary search to find closest index to x
        int low = 0;
        int high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == x)
            {
                low = mid;
                break;
            }
            else if (arr[mid] > x)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        int lb = low - 1;
        int up = low;
        
        while (k--)
        {
            if (lb < 0)
            {
                v[k] = arr[up++];
            }
            else if (up == n)
            {
                v[k] = arr[lb--];
            }
            else if (abs(arr[lb] - x) <= abs(arr[up] - x))
            {
                v[k] = arr[lb--];
            }
            else
            {
                v[k] = arr[up++];
            }
        }
        
        sort(v.begin(), v.end());
        return v;
    }
};