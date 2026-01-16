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

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
 
    vector<int> ans(n);
    ans[0] = 1;
    int c = 2;
    for (int i = 1; i < n; i++) {
        int d = a[i] - a[i - 1]; 
        if (i - d < 0) {
            ans[i] = c++;
        } else {
            ans[i] = ans[i - d];
        } 
    }
 
    for (int &i : ans) cout << i << ' ';
    cout << endl;
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