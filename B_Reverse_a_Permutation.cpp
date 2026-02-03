#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'
void sol()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx=0;
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        int w = n - i;
        if (v[i] != w) {
            int pos = i;
            for (int j = i; j < n; j++) {
                if (v[j] == w) {
                    pos = j;
                    break;
                }
            }
            reverse(v.begin() + i, v.begin() + pos + 1);
            break;
        }
    }

    for (int x : v) cout << x << " ";
    cout << '\n';
}
signed main()
{
    bismillah();
    int t = 1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}