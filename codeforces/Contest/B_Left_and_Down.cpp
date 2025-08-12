#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, k;
        cin >> a >> b >> k;

        if (a <= k && b <= k) {
            cout << 1 << endl;
        } else {
            long long g = __gcd(a, b);
            long long x = a / g;
            long long y = b / g;
            if (x <= k && y <= k)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
