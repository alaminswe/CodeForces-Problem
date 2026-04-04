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

    int x = n*3;
    int y = 1;
    for (int i = 0; i < n; i++)
    {
        cout<<x;
        x--;
        cout<<" "<<y;
        y++;
        cout<<" "<<x<<" ";
        x--;
    }
    cout<<nl;
    
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