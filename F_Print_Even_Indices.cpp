#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'


//  1 2 5 4 8
//  0 1 2 3 4 
void recurtion(int n, vector<int>v){
    if(n<0) return;

    if(!(n&1)) cout<<v[n]<<" "; 
    recurtion(n-1, v );
    
}
void sol()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    recurtion(n-1, v);
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