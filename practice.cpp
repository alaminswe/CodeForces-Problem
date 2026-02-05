#include <bits/stdc++.h>
using namespace std;

#define bismillah()              \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define int long long
#define nl '\n'

void sol()
{
    int b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;
    if (x + y > n)
    {
        cout << -1 << nl;
        return;
    }
    int low = (b + g + n - 1) / n; 

    int high = min(b/x, g/y);

    if (low > high)
        cout << -1 << '\n';
    else
        cout << low << '\n';
}

signed main()
{
    bismillah();
    int t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}
