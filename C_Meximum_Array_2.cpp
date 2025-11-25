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
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> mnk(n, 0), mxk(n, 0);
    while (q--)
    {
        int c, l, r;
        cin >> c >> l >> r;

        for (int i = l-1; i < r; i++)
        {
            if (c == 1)
            {
                mnk[i] = 1;
            }
            else
                mxk[i] = 1;
        }
    }
    
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        if (mnk[i]==1 && mxk[i]==1)
        {
            ans[i] = k + 1;
        }
        else if (mxk[i]==1)
        {
            ans[i] = i % k;
        }
        else
            ans[i] = k;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " \n"[i == (n - 1)];
    }
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