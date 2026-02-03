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
    if(n==1){
        cout<<1<<" "<<1<<nl;
        return;
    }

    int x = 2, y = 1;
    int z = n * 2;

    vector<int> v(z, 0);

    v[0] = x;
    v[1] = y;

    for (int i = 3; i <= n; i++) {
        v[i - 1] = i;
        int idx = i * 2 - 1;

        if (idx < z)  
            v[idx] = i;
    }

    for (int i = z - 1; i >= z / 2; i--) {
        if (v[i] == 0 && (i & 1))
            v[i] = y;
        else if (v[i] == 0)
            v[i] = x;
    }

    for (int i = 0; i < z; i++) {
        if (v[i] == 0) v[i] = x; 
    }

    for (auto u : v)
        cout << u << " ";
    cout << nl;

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