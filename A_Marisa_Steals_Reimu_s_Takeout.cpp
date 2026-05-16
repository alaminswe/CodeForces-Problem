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
    int zero = 0, one = 0, two = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0) zero++;
        else if (v[i] == 1) one++;
        else two++;
    }

    int m = min(one, two);
    two -= m;
    one -= m;
    int ans = m;

    ans += zero;
    ans += (one / 3) + (two / 3);

    cout << ans << nl;
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