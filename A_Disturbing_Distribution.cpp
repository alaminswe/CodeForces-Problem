#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;
        for (int x : a)
            if (x > 1)
                ans = (ans + x) % MOD;

        // Trailing 1s (after the last non-1 element) cannot be absorbed
        // into any non-1 operation, so they form their own group costing 1.
        if (a[n - 1] == 1)
            ans = (ans + 1) % MOD;

        cout << ans << "\n";
    }
    return 0;
}