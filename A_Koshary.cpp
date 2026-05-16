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
    int x, y;
    cin >> x >> y;

    int a = x % 2;
    int b = y % 2;

    if (a == 1 && b == 0)
    {
        cout << "YES\n";
    }
    else if (a == 0 && b == 1)
    {
        cout << "YES\n";
    }
    else if (a == 0 && b == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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