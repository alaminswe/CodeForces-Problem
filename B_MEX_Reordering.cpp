#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long

void solve()
{
    int n;cin>>n;
    map<int,int> mp;
    for(int x,i=0; i<n; i++) 
    {
        cin>>x;
        mp[x]++;
    }
    if(mp[0] == 1) {
        cout<<"YES"<<endl; 
        return;
    }
    if(mp[0] > 1 && mp[1] >= 1) {
        cout<<"YES"<<endl; 
        return;
    }
    cout<<"NO"<<endl;
}
 
signed main()
{
    bismillah();
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}