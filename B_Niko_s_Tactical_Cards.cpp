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

    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int mx = 0, mn = 0;
    for (int i = 0; i < n; ++i) {
        int new_mx = max(mx - a[i], b[i] - mn);
        int new_mn = min(mn - a[i], b[i] - mx);
        mx = new_mx, mn = new_mn;
    }
    cout << mx << endl;
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