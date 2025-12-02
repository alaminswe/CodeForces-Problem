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
    int a,b,n;
    cin >> a >> b >> n;

    if (b < a)
			swap(a, b);

    int cnt = 0 ;

    while (1)
    {
        a+=b;
        swap(a, b);
        if(a>n){
            cout<<cnt<<nl;
            return;
        }
        cnt++;
    }
    
    
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