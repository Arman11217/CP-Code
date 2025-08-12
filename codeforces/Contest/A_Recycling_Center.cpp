#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;
    multiset<long long> bags;
    for (int i = 0; i < n; ++i) {
        long long a;
        cin >> a;
        bags.insert(a);
    }
    
    int res = 0;
    while (!bags.empty()) {
        auto it = bags.upper_bound(c);
        if (it != bags.begin()) {
            --it;
            bags.erase(it);
        } else {
            it = bags.begin();
            res++;
            bags.erase(it);
        }
        multiset<long long> new_bags;
        for (long long x : bags) {
            if (x > 1e18) x = 2e18;
            new_bags.insert(x * 2);
        }
        bags = new_bags;
    }
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}