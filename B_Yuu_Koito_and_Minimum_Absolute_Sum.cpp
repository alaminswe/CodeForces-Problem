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
    for(int i=0; i<n; i++)
        cin >> a[i];
        
    if(a[0] == -1)
        a[0] = a[n-1];
    if(a[n-1] == -1)
        a[n-1] = a[0];
    for(int i=0; i<n; i++)
        if(a[i] == -1)
            a[i] = 0;
    cout << abs(a[n-1] - a[0]) << '\n';
    for(int i=0; i<n; i++)
        cout << a[i] << " \n"[i == n-1];
    
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