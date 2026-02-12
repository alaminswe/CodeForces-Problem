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
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int k;cin>>k;
    while (k--)
    {
        int l,r;cin>>l>>r;
        int lw = lower_bound(v.begin(), v.end(), l)-v.begin();
        int up = upper_bound(v.begin(), v.end(), r)-v.begin();
        cout<<up-lw<<" ";

    }
    cout<<nl;

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