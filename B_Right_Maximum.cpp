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
    map<int, int, greater<int>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int ans = 0, x = 0;

    for (auto i : mp)
    {
        // cout<<i.first<<" "<<i.second<<nl;
        for (int j = 0; j < n; j++)
        {
            if (i.first == v[j])
            {
                x = j;
                if(x==0)break;
                ans += i.second;
                n = j;
                
            }
        }
        if (x == 0)
        {
            cout << ans << '\n';
            return;
        }
    }

    // int i = n - 1;

    // while (i >= 0) {
    //     int mx = *max_element(v.begin(), v.begin() + i + 1);

    //     while (i >= 0 && v[i] != mx) {
    //         i--;
    //     }

    //     ans++;
    //     i--;
    // }
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