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
    string s;
    cin >> s;

    int n = s.size();
    int cnt = 0;
    if (s[1] == 'u')
    {
        if (s[0] != 's')
        {
            s[0] = 's';
            cnt++;
        }
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == 'u')
        {
            if (s[i + 1] == 's' && s[i - 1] == 's')
            {
                //
            }
            else if (s[i + 1] == 'u')
            {
                s[i + 1] = 's';
                cnt++;
            }
        }
    }
    if(s[0]=='u') cnt++;
    if(s[n-1]=='u') cnt++;
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