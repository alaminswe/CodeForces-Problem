#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol()
{
    int n;
    cin >> n;

    cout << 1 << " ";
    for (int i = 2; i <= n; i++)
    {
        cout << i * (i - 1) << " ";
    }
    cout << nl;
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