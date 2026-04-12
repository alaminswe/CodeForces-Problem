#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n+2);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int p;
    cin >> p;

    v[0]=v[n+1]=v[p];

    int l=0,r=0;
    for (int i = 0; i < p; i++)
    {
        if(v[i]!=v[i+1]) l++;
    }

    for (int i = p; i <= n; i++)
    {
        if(v[i]!=v[i+1]) r++;
    }

    cout << max(l,r) << nl;
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