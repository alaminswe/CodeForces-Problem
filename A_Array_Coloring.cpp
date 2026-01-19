#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'

void sol() {
    int n;
    cin >> n;

    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i; 
    }

    sort(a.begin(), a.end()); 

    vector<int> color(n);

    for(int i = 0; i < n; i++){
        color[a[i].second] = i % 2;
    }

    for(int i = 0; i + 1 < n; i++){
        if(color[i] == color[i+1]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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