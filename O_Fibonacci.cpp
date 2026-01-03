#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

int mem[100005];
int mark[10005];


int recurtion(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    // if(n<=2) return n-1;
 
    // return recurtion(n-1) + recurtion(n-2);

    //reuseable 
    if(mark[n]==1) return mem[n];
    int res = recurtion(n-1) + recurtion(n-2);

    mem[n] = res;
    mark[n]=1;

    return res;  
}
void sol()
{
    int n;
    cin >> n;
    int x = recurtion(n);
    cout<<x<<nl;
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