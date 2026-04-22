#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'
void sol()
{
    int x,y;
    cin>>x>>y;

    int z = y-x;
    // cout<<z<<nl;
    if(x<z && z<y && y%z!=0){
        cout<<"YES"<<nl;
    }else{
        cout<<"NO"<<nl;
    }
    
}
signed main()
{
    bismillah();
    int t=1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}