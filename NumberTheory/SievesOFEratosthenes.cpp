#include <bits/stdc++.h>
using namespace std;

void sieve(int n) {
    vector<bool> isPrime(n+1, true); // 0 to n
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Print primes
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) cout << i << " ";
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    sieve(n);
    return 0;
}
