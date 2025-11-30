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
    int y, r;
    cin >> y >> r;

    int ans=r;
    n=n-r;
    int yc = y/2;
    if(yc<=n){
        cout<<ans+yc<<nl;
    }else{
        cout<<ans+n<<nl;
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