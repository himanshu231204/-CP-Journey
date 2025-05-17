// Problems link   https://cses.fi/problemset/task/1713


#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;
    vector<int> numbers(n);
    int max_val = 0;

    // Read all numbers and find max
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
        if (numbers[i] > max_val) max_val = numbers[i];
    }

    // Precompute divisor counts up to max_val
    vector<int> divisorCount(max_val + 1, 0);
    for (int i = 1; i <= max_val; i++) {
        for (int j = i; j <= max_val; j += i) {
            divisorCount[j]++;
        }
    }

    // Print the divisor count for each input number
    for (int i = 0; i < n; i++) {
        cout << divisorCount[numbers[i]] << "\n";
    }

    return 0;
}
