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

    int bestA = 1, bestB = n - 1;
    int bestLCM = LLONG_MAX;

    for (int i = 1; i <= n / 2; i++) {
        int a = i;
        int b = n - i;

        int g = __gcd(a, b);
        int lcm = (a / g) * b;

        if (lcm < bestLCM) {
            bestLCM = lcm;
            bestA = a;
            bestB = b;
        }
    }

    cout << bestA << " " << bestB << nl;
    
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