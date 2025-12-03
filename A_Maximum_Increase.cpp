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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    int curr=0,mx=0;
    for (int i = 1; i < n; i++)
    {
        if(v[i-1]<v[i]) {
            curr++;
        }else{
            curr=0;
            continue;
        }

        mx=max(mx,curr);
    }

    cout<<mx+1<<nl;
    
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