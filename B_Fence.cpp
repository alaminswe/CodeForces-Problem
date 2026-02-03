#include <bits/stdc++.h>
using namespace std;

#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int long long
#define nl '\n'

void sol() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int sum = 0;
    int ans = 1e18;
    int in = 0;

    for (int i = 0; i < k; i++) {
        sum += v[i];
    }
    ans = sum; 
    in = 0;

    for (int i = k; i < n; i++) {
        sum += v[i];
        sum -= v[i - k];

        if (sum < ans) {
            ans = sum;
            in = i - k + 1; 
        }
    }

    cout << in + 1 << nl;
}

signed main() {
    bismillah();
    sol();
    return 0;
}
