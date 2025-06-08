#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> doors(n);
    for (int i = 0; i < n; ++i) {
        cin >> doors[i];
    }
    
    int first_closed = -1;
    int last_closed = -1;
    for (int i = 0; i < n; ++i) {
        if (doors[i] == 1) {
            if (first_closed == -1) {
                first_closed = i + 1; 
            }
            last_closed = i + 1;
        }
    }
    
    if (first_closed == -1) {
        cout << "YES\n";
        return;
    }
    
    if (x >= (last_closed - first_closed + 1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}