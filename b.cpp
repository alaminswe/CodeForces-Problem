#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol()
{
        int n;
        cin >> n;
        
        string s = "";
        
        int zero = n / 2;
        int one = n - zero;
        
        for (int i = 0; i < zero; i++) {
            s += '0';
        }
        
        for (int i = 0; i < one; i++) {
            s += '1';
        }
        
        cout << s << nl;
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
