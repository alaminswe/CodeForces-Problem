#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

int digitSum(int x) {
    int s = 0;
    while (x > 0) {
        s += x % 10;
        x /= 10;
    }
    return s;
}
void sol()
{
    int n;
    cin >> n;

    int ans = 0;
    int cur = n + 1;

    for (int i = 0; i < 1000; i++) {
        if (cur - digitSum(cur) == n)
            ans++;
        cur++;
    }

    cout << ans << "\n";
    
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