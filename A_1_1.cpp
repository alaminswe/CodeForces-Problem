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

    string s;
    cin >> s;

    string mns = s;
    string mxs = s;
    int x = 10000;
    while (x--)
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (mxs[i - 1] == '1' && mxs[i + 1] == '1')
            {
                mxs[i] = '1';
            }
        }
    }
    int cnt2 = count(mxs.begin(), mxs.end(), '1');
    int y = 10000;
    while (y--)
    {
        for (int i = 1; i < n - 1; i++)
        {
            if (mxs[i - 1] == '1' && mxs[i + 1] == '1')
            {
                mxs[i] = '0';
            }
        }
    }

    int cnt = count(mxs.begin(), mxs.end(), '1');

    cout << cnt << " " << cnt2 << nl;
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