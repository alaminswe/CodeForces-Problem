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

    vector<int> twos, threes, both, no;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        bool div2 = (x % 2 == 0);
        bool div3 = (x % 3 == 0);

        if (div2 && div3)
        {
            both.push_back(x);
        }
        else if (div2)
        {
            twos.push_back(x);
        }

        else if (div3)
        {
            threes.push_back(x);
        }
        else
        {
            no.push_back(x);
        }
    }

    for (auto x : twos)
        cout << x << " ";
    for (auto x : no)
        cout << x << " ";
    for (auto x : threes)
        cout << x << " ";
    for (auto x : both)
        cout << x << " ";

    cout << '\n';
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