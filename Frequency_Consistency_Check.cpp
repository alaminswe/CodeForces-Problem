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

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    vector<int>v;
    for (auto u : mp) {
        // cout<<u.first<<" "<<u.second<<nl;
        v.push_back(u.second);
    }

    // for (auto u : v) {
    //     cout<<u<<" ";
    // }
    // cout<<nl;
    int xx = v.size();
    for (int i = 0; i < xx-1 ; i++) {
        if(v[i]!=v[i+1]){
            // cout<<v[i]<<v[i-1]<<nl;
            cout<<"NO"<<nl;
            return;
        }
    }

    cout<<"YES"<<nl;
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