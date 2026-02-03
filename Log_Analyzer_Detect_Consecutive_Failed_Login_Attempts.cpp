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
   int n, k;
    cin >> n;

    string s;
    cin >> s;

    cin >> k;

    int cnt = 0;

    for (char c : s) {
        if (c == 'F') {
            cnt++;
            if (cnt >= k) {
                cout << "YES\n";
                return ;
            }
        } else {
            cnt = 0; 
        }
    }

    cout << "NO\n";
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