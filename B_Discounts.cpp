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

    vector<int> v(n);
    vector<int> a(k);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }

    sort(v.rbegin(), v.rend());   // descending
    sort(a.begin(), a.end()); // ascending

    long long s = accumulate(v.begin(), v.end(), 0LL);

    int x = 0; 

    for (int i = 0; i < k; i++)
    {
        x += a[i];
        if(x>n) break;
        int y = x-1;
        s-=v[y];

        // if (x == 1)
        // {
        //     // skip 1 
        //     x++;
        // }
    }

    cout << s << nl;
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