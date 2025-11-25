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
    int n, a, b;
    cin >> n >> a >>b;
    string s;
    cin>>s;

    int x  = abs(a);
    int y  = abs(b);

    for (auto c : s)
    {
        if(c=='8'){
            x = max(x-1,0LL);
            y = max(y-1,0LL);
        }else{
            if(x<y) y = max(y-1,0LL);
            else x = max(x-1,0LL);
        }
    }
    
    cout << (x == 0 && y == 0 ? "YES" : "NO") << '\n';

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