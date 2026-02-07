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

    int n, k;
    cin >> n >> k;
    vector<int> a(n+5);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<int> q(n+5);
    for (int i = 1; i <= n; i++)
    {
        cin >> q[i];
    }
    a[n+1]=0;
    for (int i = n; i > 0; i--)
    {
        a[i] = max({a[i],q[i],a[i+1]});
    }

    vector<int>prep(n+5);
    prep[0]=0;
    for (int i = 1; i <=n ; i++)
    {
        prep[i] = prep[i-1]+a[i];
    }

    while (k--)
    {
        int l, r;
        cin >> l >> r;
        int sum = prep[r]-prep[l-1];
        cout<<sum<<" ";
    }
    cout << nl;
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