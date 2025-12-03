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

    string s="";
    for (int i = 0; i < n*2; i++)
    {
        if(i<n) s+="(";
        else s+=")";
    }

    int cng=n;
    for (int i = 0; i < n; i++)
    {
        cout<<s<<nl;
        swap(s[cng],s[cng-1]);
        cng--;
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