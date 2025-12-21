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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            continue;
        }
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                v[j] = 0;
            }
        }
        
    }
    for (int k = 0; k < n; k++)
    {
        if (v[k] == 0) cnt++;
    }
    cout << cnt << nl;
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