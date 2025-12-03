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
    string s;
    cin >> s;

    stack<char>st;
    int cnt=0,mx=0,c=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='('){
            st.push('(');
        }else{
            if(st.empty()){
                cnt=0;
                c++;
                continue;
            }

            st.pop();
            cnt++;
            mx=max(mx,cnt);
        }
    }

    cout<<mx*2<<" "<<c<<nl;

    
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