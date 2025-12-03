#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'
bool cmp(pair<int,int>p,pair<int,int>q){
    if(p.first == q.first) return p.second<q.second;
    return p.first>q.first;
}
void sol()
{
    int n , k;
    cin >> n >> k;
    vector<pair<int,int>>vp(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vp[i].first;
        vp[i].first%=k;
        if(vp[i].first==0) cout<<i+1<<" ";
        vp[i].second=i+1;
    }
    sort(vp.begin(),vp.end(),cmp);

    for(auto u : vp){
        if(u.first>0)cout<<u.second<<" ";
    }
    cout<<nl;
    
    
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