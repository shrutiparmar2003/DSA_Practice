#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }
        
        int count = 0;
        vector<bool> isPrime(n, true);  // Vector to mark primes
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime
        
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                // Mark multiples of i as non-prime
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        
        // Count the primes
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }
        
        return count;
    }
};

int main() {
    int n;
    cout << "Enter a number to count number of primes strictly less than it: ";
    cin >> n;

    Solution obj;
    int result = obj.countPrimes(n);  // Get the prime count
    cout << "The total number of prime numbers less than " << n << " is: " << result << endl;

    return 0;
}
