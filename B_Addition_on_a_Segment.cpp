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
    int sum = 0;
    int cnt =0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;

        sum+=x;
        if(x) cnt++;
    }

    cout<<min(sum-n+1,cnt)<<endl;
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