#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> vec;

        if (n == 0) {
            vec.push_back(0);
        } else {
            while (n != 0) {
                vec.push_back(n % 10);
                n /= 10;
            }
        }

        for (int i = 0; i < vec.size(); i++) {
            cout << vec[i];
            if (i != vec.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
