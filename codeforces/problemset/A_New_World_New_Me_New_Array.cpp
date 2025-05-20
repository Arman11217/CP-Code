#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long n, k, p;
        cin >> n >> k >> p;
        long long need = llabs(k);
        long long maxSum = n * p;
        if (need > maxSum) {
            cout << -1 << "\n";
        } else {
            // ceil(need / p) = (need + p - 1) / p
            if (need == 0) {
                cout << 0 << "\n";
            } else {
                cout << (need + p - 1) / p << "\n";
            }
        }
    }
    return 0;
}
