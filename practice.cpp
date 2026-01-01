#include <bits/stdc++.h>
using namespace std;

#define int long long
#define nl '\n'
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void sol()
{
    int n;
    cin>>n;

    stack<int> st;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
        v[i]=x;
    }
    vector<int>res;
    while (!st.empty())
    {
        int y = st.top();

        int c = 0;
        int sz = st.size();

        // cout<<"y is "<<y <<"and size is"<<sz<<nl;
        for (int i = sz-2; i >= 0; i--)
        {
            if(v[i]<y){
                // cout<<"v[i] is "<<v[i]<<nl;
                res.push_back(i+1);
                c=1;
                break;
            }
        }
        if(!c) res.push_back(0);
        st.pop();
        
    }
    reverse(res.rbegin(),res.rend());
    for (auto u : res)
    {
        cout<<u<<" ";
    }
    
    cout<<nl;
}

signed main()
{
    bismillah();
    int t = 1;
    // cin >> t;
    while (t--)
        sol();
    return 0;
}
