#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

int solve(int a, int b){
    int w = a, d = b;
    int n = 1;
    int cnt1 = 0;

    // 1 - W B W
    for(int i = 0; i < 32; i++){
        if(i % 2 == 0){
            if(w >= n){
                w -= n;
                cnt1++;
            } else break;
        } else {
            if(d >= n){
                d -= n;
                cnt1++;
            } else break;
        }
        n <<= 1;
    }

    w = a; d = b;
    n = 1;
    int cnt2 = 0;

    // 2 B W B
    for(int i = 0; i < 32; i++){
        if(i % 2 == 0){
            if(d >= n){
                d -= n;
                cnt2++;
            } else break;
        } else {
            if(w >= n){
                w -= n;
                cnt2++;
            } else break;
        }
        n <<= 1;
    }

    return max(cnt1, cnt2);
}

void sol()
{
    int a, b;
    cin >> a >> b;

    cout<<solve(a,b)<<nl;
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