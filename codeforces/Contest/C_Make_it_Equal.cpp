#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> x(n), y(n);

        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < n; i++) cin >> y[i];

        for (int i = 0; i < n; i++) {
            long long p=x[i] % k;
            long long q=y[i] % k;
            x[i] = min(p, k - p);
            y[i] = min(q, k - q);
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (x[i] != y[i]) {
                possible = false;
                break;
            }
        }

        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
