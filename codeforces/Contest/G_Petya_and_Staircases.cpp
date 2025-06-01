#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int m;
    cin >> n >> m;

    vector<int> dirty(m);
    for(int i = 0; i < m; ++i) {
        cin >> dirty[i];
    }

    sort(dirty.begin(), dirty.end());

   
    if (m > 0 && (dirty[0] == 1 || dirty[m - 1] == n)) {
        cout << "NO" << endl;
        return 0;
    }


    for (int i = 0; i <= m - 3; ++i) {
        if (dirty[i] + 1 == dirty[i + 1] && dirty[i + 1] + 1 == dirty[i + 2]) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
