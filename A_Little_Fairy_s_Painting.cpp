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

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        st.insert(x);
    }

    cout << *st.lower_bound(st.size()) << "\n";
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