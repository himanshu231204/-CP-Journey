#include <bits/stdc++.h>
using namespace std;

// Macros
#define fastIO ios::sync_with_stdio(false); cin.tie(NULL);
#define endl '\n'
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define all(x) (x).begin(), (x).end()

int main() {
    fastIO;

    int t = 1;
    cin >> t; // For multiple test cases

    while (t--) {
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // 🔸 Yahan logic likho
        // Example: print array elements
        for (int i = 0; i < n; ++i)
            cout << a[i] << " ";
        cout << endl;
    }

    return 0;
}
