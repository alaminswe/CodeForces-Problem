#include <bits/stdc++.h>

using namespace std;

struct Element {
    int val, id;
};

bool compareElements(const Element& a, const Element& b) {
    return a.val < b.val;
}

void solve() {
    int n;
    cin >> n;
    vector<Element> all;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        all.push_back({a, i});
        all.push_back({b, i});
        all.push_back({c, i});
    }

    sort(all.begin(), all.end(), compareElements);

    vector<int> freq(n, 0);
    int distinct_rows = 0;
    int left = 0;
    int min_diff = 2e9; 

    for (int right = 0; right < all.size(); right++) {
        if (freq[all[right].id] == 0) {
            distinct_rows++;
        }
        freq[all[right].id]++;

        while (distinct_rows == n) {
            min_diff = min(min_diff, all[right].val - all[left].val);
            
            freq[all[left].id]--;
            if (freq[all[left].id] == 0) {
                distinct_rows--;
            }
            left++;
        }
    }
    cout << min_diff << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
