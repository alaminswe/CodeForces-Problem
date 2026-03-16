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

    int arr[n][n];
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            st.insert(arr[i][j]);
        }
    }

    if (1== n)
    {
        cout << "NO" << nl;
        return;
    }

    if (st.size() >= n)
    {
        cout << "YES" << nl;
        return;
    }
    cout << "NO" << nl;
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