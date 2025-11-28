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
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    int ans=0;
    int a = *max_element(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if(a==v[i]){
            ans=(i+1)-1;
        }
    }
    cout<<ans<<nl;
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