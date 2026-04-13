#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol()
{
    int n ;
    cin>>n;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    bool chk =false;
    for(int i = 0; i < n-1; i++) { 
        if(v[i] == v[i+1]){
            chk = true;
            break;
        }
    }

    if(chk){
        cout << -1 <<nl;
        return;
    }

    for(int i = 0; i < n ; i++) {
        cout<<v[i]<<" ";
    }
    cout<<nl;

}

signed main()
{
    bismillah();
    int t=1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}