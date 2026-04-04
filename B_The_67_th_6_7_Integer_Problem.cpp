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
    vector<int> v(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += v[i];
    }

    int mx = *max_element(v.begin(), v.end());

    int ans = 2 * mx - sum;

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