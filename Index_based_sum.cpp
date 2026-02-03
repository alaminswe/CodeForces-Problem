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

    vector<pair<int,int>> nums(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums[i] = {x, i};
    }

    int target;
    cin >> target;

    sort(nums.begin(), nums.end());

    int l = 0, r = n - 1;
    while(l < r) {
        int sum = nums[l].first + nums[r].first;
        if(sum == target) {
            int a = nums[l].second;
            int b = nums[r].second;
            cout << min(a,b) << " " << max(a,b) << nl;
            return;
        } else if(sum < target) {
            l++;
        } else {
            r--;
        }
    }
}

signed main()
{
    bismillah();
    int t = 1;
    while(t--) sol();
    return 0;
}
