#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

bool cmp(const pair<int, int> &p1, const pair<int, int> &p2)
{
    if (p1.first < p2.first)
        return 1;
    else if (p1.first == p2.first)
        return (p1.second > p2.second);

    return 0;
}
void sol()
{
    int n, p;
    cin >> n >> p;

    vector<pair<int, int>> v;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back({min(b[i], p), a[i]});
    }

    sort(v.begin(), v.end(),cmp);

    for (auto i : v)
    {
        cout << i.first << " " << i.second << endl;
    }

    int cost = p;
    int x = n-1;
    
    for (auto i : v)
    {
        int y = min(x,i.second);
        cost+=(i.first*y);
        x-=y;
    }
 
    cout<<cost<<nl;
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