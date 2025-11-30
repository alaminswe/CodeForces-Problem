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

    map<int,int>mp;
    for (int i = 0; i < 2*n; i++)
    {
        int x ;
        cin>>x;
        mp[x]++;
    }

    int od=0;
    int cnt=0;
    int evn=0;
    for (auto u : mp)
    {
        if(u.second&1){
             od++;
             cnt++;
        }
        else {
            evn++;
            if((u.second/2)&1)
            cnt+=2;
        }
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