#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int p;
    cin >> p;
    p--; 

    int x = v[p];

    int s = v[0];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != x)
        {
            ans++;
            while (i < n && v[i] != x)
                i++;
        }
    }

    cout << ans << nl;
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