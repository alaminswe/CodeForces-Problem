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
    vector<int> a(n);
    vector<int> m(n);
    int x=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        x^=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>m[i];
        x^=m[i];
    }
    if (x==0){ 
        cout<<"Tie"<<nl;
        return;
    }
    int idx;
    for (int i = 0; i < n; i++)
    {
        if(a[i]^m[i])idx=i;
    }

    // cout<<aji<<" "<<mi<<nl;
    if(idx&1? cout<<"Mai"<<nl : cout<<"Ajisai"<<nl);
    

    
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