#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0);
#define int long long

int mex(int l, int r, vector<int> &v) {
    unordered_set<int> s;
    for(int i = l; i <= r; i++){
        s.insert(v[i]);
    }
    int m = 0;
    while(s.count(m)) m++;
    return m;
}


void solve()
{
    int n;cin>>n;
    map<int,int> mp;
    for(int a,i=0; i<n; i++) 
    {
        cin>>a;
        mp[a]++;
    }
    if(mp[0] == 0) {cout<<"YES"<<endl; return;}
    if(mp[0] == 1) {cout<<"YES"<<endl; return;}
    if(mp[1] == 0) {cout<<"NO"<<endl; return;}
    cout<<"YES"<<endl;
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