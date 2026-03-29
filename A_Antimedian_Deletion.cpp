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

    if(n==1) {
        cout<<1<<nl;
        return;
    }else if(n==2){
        cout<<2<<" "<<2<<nl;
        return;
    }
    int x = n;
    // for (int i = 0; i < x-2; i++)
    // {
    //     cout<<--n<<" ";
    // }

    for (int i = 0; i < x; i++)
    {
        cout<<2<<" ";
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