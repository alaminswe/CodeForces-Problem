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
    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (p[0] != a[0])
    {
        int x = a[0];
        if(x==p[1]) p[0] = p[1];
        // if (p[0] != a[0])
        // {
        //     cout << "NO" << nl;
        //     return;
        // }
    }
    for (int i = 1; i < n-1; i++)
    {
        if (p[i] != a[i])
        {
            int x = a[i];
            if (p[i - 1] == x)
                p[i] = p[i - 1];
            else
                p[i] = p[i + 1];

            // if (p[i] != a[i])
            // {
            //     cout << "NO" << nl;
            //     return;
            // }
        }
    }
    if (p[n-1] != a[n-1])
    {
        int x = a[n-1];
        if(x==p[1]) p[n-1] = p[n-2];
        // if (p[n-1] != a[n-1])
        // {
        //     cout << "NO" << nl;
        //     return;
        // }
    }
    for (int i = n-2; i > 0; i--)
    {
        if (p[i] != a[i])
        {
            int x = a[i];
            if (p[i - 1] == x)
                p[i] = p[i - 1];
            else
                p[i] = p[i + 1];

            // if (p[i] != a[i])
            // {
            //     cout << "NO" << nl;
            //     return;
            // }
        }
    }

    if (p[0] != a[0])
    {
        p[0] = p[1];
        // if (p[0] != a[0])
        // {
        //     cout << "NO" << nl;
        //     return;
        // }
    }
    for (int i = 0; i < n; i++)
    {

            if (p[i] != a[i])
            {
                cout << "NO" << nl;
                return;
            }
        
    }
    cout << "YES" << nl;
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