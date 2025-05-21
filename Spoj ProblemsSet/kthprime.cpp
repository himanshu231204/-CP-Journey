// Problem link: https://www.spoj.com/problems/TDKPRIME/

#include <bits/stdc++.h>
using namespace std;

// Macros
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define vi vector<int>

vi prime;

void sieves() {
    const int limit = 87000000; // To get at least first 5,000,000 primes
    bitset<87000001> isPrime; 
    isPrime.set();  // Set all bits to true initially
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= limit && prime.size() < 5000000; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }
}

int main() {
    fastIO;

    sieves();

    int q, n;
    cin >> q;

    while (q--) {
        cin >> n;
        cout << prime[n - 1] << endl; // 0-based indexing
    }

    return 0;
}
