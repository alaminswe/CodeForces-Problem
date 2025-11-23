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
    map<int,int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
    }
    int cnt=0;
    for (int i = 0; i <101; i++)
    {
        //cout<<mp[i]<<nl;
        if(i!=mp[i] && mp[i]!=0) {
            if(mp[i]>i){
                cnt+=(mp[i]-i);
            }else{
                cnt+=mp[i];
            }
        }
    }

    cout<<cnt<<nl;

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