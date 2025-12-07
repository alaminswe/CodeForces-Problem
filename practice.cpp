#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void sol() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int zeros = 0;
    for (char c : s) if (c == '0') zeros++;

    int base = n / k;
    int rem = n % k; // first 'rem' chains have length base+1
    int minZeros = 0, oddChains = 0;

    // Chains with length = base+1
    for (int i = 0; i < rem; i++) {
        int L = base + 1;
        minZeros += L / 2;
        if (L % 2 == 1) oddChains++;
    }

    // Chains with length = base
    for (int i = 0; i < k - rem; i++) {
        int L = base;
        minZeros += L / 2;
        if (L % 2 == 1) oddChains++;
    }

    int maxZeros = minZeros + oddChains;

    if (zeros >= minZeros && zeros <= maxZeros) cout << "Yes\n";
    else cout << "No\n";
}

signed main() {
    bismillah();
    int t;
    cin >> t;
    while (t--) sol();
    return 0;
}
