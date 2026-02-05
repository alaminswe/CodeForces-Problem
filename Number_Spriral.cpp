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
    int x,y;
    cin >> x >> y;

    if(x==1 && y==1){
        cout<<1<<nl;
        return;
    }

    if(x<=y){
        if(y&1){
            cout<<(y*y)-(x-1)<<nl;
        }else{
            cout<<(y-1)*(y-1)+x<<nl;
        }
    }else{
        if(x&1){
            cout<<(x-1)*(x-1)+y<<nl;
        }else{
            cout<<(x*x)-(y-1)<<nl;
        }
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