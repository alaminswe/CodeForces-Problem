#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

bool search(int n){
    int l=0,h=n;
    int ans = 0 ;
    for (int i = 2; i*i < n; i++)
    {
        if(n%i==0){
            return false;
        }
    }
    
    // while (l<=h)
    // {
    //     int mid =(h + l) / 2;
    //     if(n%mid==0){
    //         ans++;
    //     }
    //     h = mid;

    // }
    return true;
}
void sol()
{
    int n;
    cin >> n;

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        int cnt = search(x);
        if(cnt) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }


    

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