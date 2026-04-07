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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin>>v[i];
    }

    int sum = accumulate(v.begin(),v.end(),0);

    // cout<<sum<<nl;

    if(sum&1){
        cout<<"YES"<<nl;
    }else{
        int x = k*(v.size());
        if(x&1){
            cout<<"NO"<<nl;
        }else{
            cout<<"YES"<<nl;
        }
    }
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