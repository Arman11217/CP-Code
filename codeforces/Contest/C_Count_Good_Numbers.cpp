#include <bits/stdc++.h>
using namespace std;


long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

long long count_divisible(long long r, long long d) {
    return r / d;
}

long long count_divisible(long long l, long long r, long long d) {
    return r / d - (l - 1) / d;
}

long long count_bad(long long l, long long r) {
    vector<int> primes = {2, 3, 5, 7};
    long long bad = 0;

    for (int mask = 1; mask < (1 << 4); mask++) {
        long long curr_lcm = 1;
        int bits = 0;
        for (int i = 0; i < 4; i++) {
            if (mask & (1 << i)) {
                curr_lcm = lcm(curr_lcm, primes[i]);
                bits++;
            }
        }
        long long cnt = count_divisible(l, r, curr_lcm);
        if (bits % 2 == 1) bad += cnt;
        else bad -= cnt;
    }
    return bad;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long total = r - l + 1;
        long long bad = count_bad(l, r);
        long long good = total - bad;

        cout << good << endl;
    }
    return 0;
}
