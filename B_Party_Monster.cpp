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
    cin>>n;
    string s;
    cin >> s ;
    // int n=s.size();
    int x=0,y=0,a=0;
    for(auto c : s){
        if(c=='('){
            x++;
            a++;
        }else{
            y++;
            a--;
        }
    }

    // cout<<x<<y<<a;

    if(n&1){
        cout << "NO\n";
    }else if(x!=y){
        cout << "NO\n";
    }else if(a!=0){
        cout << "NO\n";
    }else{
        cout << "YES\n";
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