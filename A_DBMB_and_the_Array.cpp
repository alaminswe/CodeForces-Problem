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
    int n, s, x;
    cin >> n >> s >> x;

    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    if (sum == s)
    {
        cout << "YES" << nl;
        return;
    }

    int y = s - sum;
    if (y % x == 0 && y > 0)
    {
        cout << "YES" << nl;
        return;
    }

    // for (int i = x; i <= s; i+=x)
    // {
    //     sum += i;
    //     if (sum == s)
    //     {
    //         cout << "YES" << nl;
    //         return;
    //     }
    // }
    cout << "NO" << nl;
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