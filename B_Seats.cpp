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

    if (n == 1 || n == 2)
    {
        cout << 1 << nl;
        return;
    }
    int one = count(s.begin(),s.end(),'1');
    s = '1'+s+'1';
    int i = 0, j = n - 1;
    while (i < j && s[i] == '0' && s[j] == '0')
    {
        i++;
        j--;
    }

    int ans = 0,cnt=0;
    for (int k = i; k <= j; k ++)
    {
        if (s[k] == '0')
        {
            cnt++;
        }else{
            cnt=0;
        }

        if(cnt==3) ans++;
    }

    cout << one+ans+(ans>0) << nl;
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