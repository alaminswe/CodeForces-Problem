#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n;
    cin >> n;

    vector<int> a(n+1), b(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    b = a;
    sort(b.begin()+1, b.end());

    unordered_map<int, vector<int>> A, B;

    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x % 2 == 0) x /= 2; 
        A[x].push_back(a[i]);
        B[x].push_back(b[i]);
    }

    for (auto &p : A) {
        auto &va = p.second;
        auto &vb = B[p.first];
        sort(va.begin(), va.end());
        sort(vb.begin(), vb.end());
        if (va != vb) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) sol();
}
