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

    int ans = 0,cnt=0,on = 0;
    for (int k = 0; k < n; k++)
    {
        if (s[k] == '0')
        {
            cnt++;
        }else{
            cnt=0;
            on = 1;
        }

        if(cnt == 2 && on == 0) {
            ans++;
            cnt = 0;
            on = 1;
        }
        else if(cnt == 3) {
            ans++;
            cnt = 0;
        }
    }
    if(cnt==2) ans++;
    
    int one = count(s.begin(),s.end(),'1');

    cout << one+ans << nl;
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