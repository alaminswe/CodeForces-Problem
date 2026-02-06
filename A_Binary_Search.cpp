#include <bits/stdc++.h>
using namespace std;
#define bismillah()               \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define int long long
#define nl '\n'
bool exist(int x, vector<int>&a){
    int n = a.size();
    int low=0,high=n-1;
    while (low<=high)
    {
        int mid = (high+low)/2;
        if(a[mid]==x) return true;
        else if(a[mid]>x){
            high = mid-1;
        }else low = mid + 1;
    }

    return false;
    
}
void sol()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>q(k);
    for (int i = 0; i < k; i++)
    {
        cin>>q[i];
    }

    for (int i = 0; i < k; i++)
    {
        int x = q[i];
        if(exist(x,a)){
            cout<<"YES"<<nl;
        }else{
            cout<<"NO"<<nl;
        }
    }
    
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