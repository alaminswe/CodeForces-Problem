#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }

    sort(v.begin(), v.end());

    vector<pair<int,int>> m;

    for(auto v : v) {
        if(m.empty() || m.back().second < v.first) {
            m.push_back(v);
        } else {
            m.back().second = max(m.back().second, v.second);
        }
    }

    for(auto p : m) {
        cout << "[" << p.first << "," << p.second << "] ";
    }

    return 0;
}
