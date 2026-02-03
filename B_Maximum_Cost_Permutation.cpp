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
    map<int,int> mp;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] != 0) mp[v[i]]++;
    }

    vector<int> newv;
    for (auto u : mp) {
        newv.push_back(u.first);
    }

    int x = 1;
    for (int i = 0; i < newv.size(); i++) {
        if (newv[i] != i + 1) {
            x = i + 1;
            break;
        }
        x = i + 2;
    }

    for (int i = n-1; i >= 0; i--) {
        if (v[i] == 0) {
            v[i] = x;
            x++;
        }
    }

    // for (auto u : v) cout << u << " ";
    // cout << nl;
    
    int a=0,b=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]!=i+1) {
            a = i;
            break;
        }
    }
    for (int i = n-1; i >=0 ; i--)
    {
        if(v[i]!=i+1) {
            b = i;
            break;
        }
    }
    if(a==0 && b ==0) cout<<0<<nl;
    else cout<<b-a+1<<nl;
    
    
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