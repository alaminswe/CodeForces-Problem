#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

void recurtion(int n){
    if(n==1) {
        cout<<n<<nl;
        return;
    }
    cout<<n<<" ";
    recurtion(n-1);
}
void sol()
{
    int n;
    cin >> n;
    recurtion(n);
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