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
    int l,a,b;
    cin >> l >> a >> b;
    int mx=0;
    for (int i = 0; i <= 5000; i++)
    {
        a = (a + b ) % l;
        mx=max(mx, a);
    }
    
    cout<<mx<<nl;

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