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
    string s;
    cin >> s;
    int n = s.size();
    for(int i = 0; i < n-1; i++){
        if(s[i] != '<' && s[i+1] !='>') {
            cout<<-1<<nl;
            return ;
        }
    }
    int a = count(s.begin(),s.end(),'<');
    int b = count(s.begin(),s.end(),'>');
    cout<<n-min(a,b)<<nl;
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