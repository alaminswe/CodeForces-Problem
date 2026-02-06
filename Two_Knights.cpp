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

    for (int i = 1; i <= n; i++)
    {
        int cell = i * i;
        if (i == 1)
        {
            cout << 0 << nl;
        }
        else 
        {
            int total = (cell*(cell-1))/2;
            int slabs = (i-2)*(i-1)*2*2;

            cout<<total-slabs<<nl;
            
        }
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