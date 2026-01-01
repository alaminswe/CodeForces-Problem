#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

void recurtion(int a,int n){
    if(a>n) return;
    cout<<a<<nl;
    recurtion(a,n);
}
void sol()
{
    int n;
    cin >> n;
    recurtion(1,n);
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