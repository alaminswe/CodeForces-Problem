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
    string s;cin>>s;
    int ans = 1;

    for (int i = 1; i < n; i++)
    {
        if(s[i]=='L'){
            ans++;
            break;
        }
        ans++;
    }
    cout<<ans<<nl;

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