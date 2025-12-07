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
        cin >> n >> k;

        string s;
        cin >> s;

        int sleep = 0;
        int i = 0;
        int f = -1;  // last index up to which you must stay awake

        while (i < n) {
            if (s[i] == '1') {
                f = i + k;  
                i++;
            } else {
                // s[i] == '0'
                if (i <= f) {
                    // forced awake
                    i++;
                } else {
                    // you can sleep
                    sleep++;
                    i++;
                }
            }
        }

        cout << sleep << "\n";
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