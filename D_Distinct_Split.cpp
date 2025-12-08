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
    int a;
    string s;
    cin>>a>>s;
    map<char,int>m,mm;
    for(auto it:s)
    {
        m[it]++;
    }
    int an=0;
    for(auto it:s)
    {
        m[it]--;
        mm[it]++;
        if(m[it]==0)
        {
            m.erase(it);
        }
        an=max(an,(int)m.size()+(int)mm.size());
    }
    cout<<an<<nl;
    
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