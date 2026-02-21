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

    string s;
    cin>>s;
    
    int one = count(s.begin(),s.end(),'1');
    int zero = count(s.begin(),s.end(),'0');

    if(zero==n){
        cout<<0<<nl;
    }

    cout<<-1<<nl;
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