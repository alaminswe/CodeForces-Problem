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

    vector<int>v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    int t=n,cnt=0;
    for (int i = 1; i <= n; i++)
    {
        // if(v[i]==0){
        //     break;
        // }
        // cnt++;
        // int x = v[i];
        // v[x] = 0;

        if(v[i]==i){
            cnt++;
        }else if(v[i]<i) cnt++;
    }

    cout<<cnt<<nl;
    
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