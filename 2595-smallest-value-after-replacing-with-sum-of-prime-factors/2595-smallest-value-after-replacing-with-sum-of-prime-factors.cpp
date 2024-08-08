class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;  // 1 is not prime
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int smallestValue(int n) {
        // base case
        if (isPrime(n) || n == 4) return n;
        
        int sum = 0;
        // kaam
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                if (isPrime(i)) {
                    int m = n;
                    while (m % i == 0) {
                        sum += i;
                        m /= i;
                    }
                }
                if (i != n / i && isPrime(n / i)) {
                    sum += n / i;
                }
            }
        }
        
        // call
        return smallestValue(sum);
    }
};