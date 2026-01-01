#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void sol()
{
    string s;
    cin >> s;

    stack<char> st;

    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }

    string ans;
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}

signed main()
{
    bismillah();
    int t = 1;
    // cin >> t;
    while (t--)
        sol();
    return 0;
}
