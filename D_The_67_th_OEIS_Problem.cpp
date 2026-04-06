#include <bits/stdc++.h>
using namespace std;
#define bismillah() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long
#define nl '\n'
vector<int>primes;
void sol()
{
    int n;
    cin >> n;
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if(i == 0) result.push_back(primes[i]);
        else{
            int x = primes[i]*primes[i-1];
            result.push_back(x);
        }
    }
    for (auto u : result)
    {
        cout<<u<< " ";
    }
    
    cout << nl;
}

signed main()
{
    bismillah();
    int t;
    cin >> t;
    for (int i = 1; i <= 1000000; i++) {
        bool is_prime = false;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = true; 
                break;
            }
        }
        if (!is_prime) primes.push_back(i);
    }

    // for (auto u : primes)
    // {
    //     cout<<u<< " ";
    // }
    
    while (t--)
    {
        sol();
    }
    return 0;
}