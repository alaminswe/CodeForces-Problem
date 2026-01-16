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

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        x = x * 10 + v[i];
    }

    int y=x;
    int rev = 0;

    while (y)
    {
        rev = rev * 10 + (y%10);
        y/=10;
    }

    if(x==rev) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    
}
signed main()
{
    bismillah();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}