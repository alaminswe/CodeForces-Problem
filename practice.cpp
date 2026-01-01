#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void sol()
{
    int a, b;
    cin >> a >> b;

    
    int smallValue = 100 * b;
    int largeValue = 225 * a;

    if (smallValue > largeValue)
    {
        cout << "Small" << nl;
    }
    else if (smallValue < largeValue)
    {
        cout << "Large" << nl;
    }
    else
    {
        cout << "Equal" << nl;
    }
        
}

signed main()
{
    bismillah();
    int t = 1;
    // cin >> t;
    while (t--)
        sol();
    return 0;
}
