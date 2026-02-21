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

    int blocks = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            blocks++;
    }

    bool allsame = true;
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            allsame = false;

    if (allsame)
    {
        cout << 1 << "\n";
        return;
    }

    if (s[0] == s[n - 1])
        cout << blocks  << "\n";
    else if (blocks!=n) 
        cout << blocks+1 << "\n";
    else
        cout << blocks << "\n";
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