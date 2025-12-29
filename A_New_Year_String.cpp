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
    string s;
    cin >> s;

    if(s.find("2025") != string::npos){
        if(s.find("2026") != string::npos){
            cout << 0 << "\n";
            return;
        }
        cout << 1 << "\n";
    }
    else{
        cout << 0 << "\n";
    }
    
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