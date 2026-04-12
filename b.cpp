#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'

void sol()
{
    string s;
    cin>>s;
    int n = s.size();

    vector<int>v;
    int cnt = 0;

    for(char c:s) {
        if(c == '1') {
            cnt++;
        } else {
            if(cnt > 0) {
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }

    if(cnt > 0) v.push_back(cnt);

    
    sort(v.rbegin(), v.rend());

    int z = 0;
    int a = v.size();
    for(int i = 0; i < a ; i += 2) {
        z += v[i];
    }

    cout << z <<nl;

}

signed main()
{
    bismillah();
    int t=1;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}