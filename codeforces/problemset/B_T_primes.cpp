#include <bits/stdc++.h>
using namespace std;

const int MAX = 1000000;
vector<bool> isPrime(MAX + 1, true);
set<long long> tPrimes;

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = 2 * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAX; i++) {
        if (isPrime[i]) {
            tPrimes.insert(1LL * i * i);
        }
    }
}

int main() {
    sieve();

    int n;
    cin >> n;
    while (n--) {
        long long x;
        cin >> x;
        if (tPrimes.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
