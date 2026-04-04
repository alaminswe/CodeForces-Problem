#include <bits/stdc++.h>
using namespace std;

#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int x = n - 1;

    while (x--) {
        sort(v.begin(), v.end());

        int mx = v.back(); 

        for (int i = 0; i < v.size(); i++) {
            v[i] ^= mx;
        }

        if (v.size() > 1) {
            v.erase(v.end() - 1);
        }
    }

    cout << v[0] << nl;
}

signed main() {
    bismillah();

    int t = 1;
    cin >> t;

    while (t--) {
        sol();
    }

    return 0;
}