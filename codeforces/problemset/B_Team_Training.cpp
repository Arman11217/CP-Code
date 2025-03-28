#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        vector<int> ar(x);
        for (int i = 0; i < x; ++i) {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        int r = 0;
        int count = 0;
        for (int i = x - 1; i >= 0; --i) {
            count++;
            if (ar[i] * count >= y) {
                r++;
                count = 0;
            }
        }
        cout << r << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}