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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // base sum
    int base = 0;
    for (int i = 0; i + 1 < n; i++)
    {
        base += abs(a[i] - a[i + 1]);
    }

    int mn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int cur = base;

        if (i == 0)
        {
            cur -= abs(a[0] - a[1]);
        }
        else if (i == n - 1)
        {
            cur -= abs(a[n - 2] - a[n - 1]);
        }
        else
        {
            cur -= abs(a[i - 1] - a[i]);
            cur -= abs(a[i] - a[i + 1]);
            cur += abs(a[i - 1] - a[i + 1]);
        }

        mn = min(mn, cur);
    }

    cout << mn << "\n";
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