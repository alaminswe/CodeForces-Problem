#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

//  1 2 5 4 8
//  0 1 2 3 4
int recurtion(int n, vector<int> v, int s)
{
    if (n == 0)
        return v[n];

    return s + v[n] + recurtion(n - 1, v, s);
}

int sol()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int sum = recurtion(n - 1, v, 0);

    return sum;
}
signed main()
{
    bismillah();
    int t = 1;
    cin >> t;
    int c = 1;
    while (t--)
    {
        cout << "Case " << c << ": " << sol() << nl;
        c++;
    }

    return 0;
}