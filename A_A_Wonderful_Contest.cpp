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

    vector<int>v(n);
    bool chk = false;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        if(v[i]==100){
            chk = true;
        }
    }
    
    if(chk) cout<<"YES\n";
    else cout<<"NO\n";

    
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