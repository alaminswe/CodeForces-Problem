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

    int s =  n*(n+1)/2;
    if(s&1){
        cout<<"NO"<<nl;
        return;
    }

    cout<<"YES"<<nl;

    vector<int>v;
    for (int i = 1; i < s/2; i++)
    {
        if(s%i==0){
            v.push_back(i);
        }
    }

    cout<<v.size()<<nl;
    vector<int>v2(n-1,0);
    for(auto u : v){
        cout<<u<<" ";
        v2[u-1]=1;
    }
    cout<<nl;

    cout<<n-v.size()<<nl;
    for (int i = 0; i < n; i++)
    {
        if(v2[i]!=1) cout<<i+1<<" ";
    }
    cout<<nl;
    
    
}
signed main()
{
    bismillah();
    int t = 1;
    // cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}