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
    string s;
    cin >> s;
    int n;
    cin >> n;

    if (n > s.size())
    {
        cout << "impossible\n";
        return;
    }

    set<char> st;

    for (char c : s)
    {
        st.insert(c);
    }

    int k = st.size();

    cout << max(0LL,n - k) << "\n";
}
signed main()
{
    bismillah();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}