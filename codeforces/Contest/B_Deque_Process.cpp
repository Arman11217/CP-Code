#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    string s;
    int left = 0, right = n - 1;
    int last = -1;
    vector<int> q;
    
    while (left <= right) {
        if (p[left] < p[right]) {
            q.push_back(p[left]);
            s += 'L';
            left++;
        } else {
            q.push_back(p[right]);
            s += 'R';
            right--;
        }
    }
    
    bool isGood = true;
    for (int i = 0; i + 4 < n; ++i) {
        bool increasing = true;
        bool decreasing = true;
        for (int j = i; j < i + 4; ++j) {
            if (q[j] >= q[j + 1]) increasing = false;
            if (q[j] <= q[j + 1]) decreasing = false;
        }
        if (increasing || decreasing) {
            isGood = false;
            break;
        }
    }
    
    if (isGood) {
        cout << s << '\n';
        return;
    }
    
    
    s.clear();
    left = 0;
    right = n - 1;
    q.clear();
    
    while (left <= right) {
        if (left == right) {
            q.push_back(p[left]);
            s += 'L';
            break;
        }
        if (p[left] < p[right]) {
            if (q.empty() || p[left] > q.back()) {
                q.push_back(p[left]);
                s += 'L';
                left++;
            } else if (p[right] > q.back()) {
                q.push_back(p[right]);
                s += 'R';
                right--;
            } else {
                q.push_back(p[left]);
                s += 'L';
                left++;
            }
        } else {
            if (q.empty() || p[right] > q.back()) {
                q.push_back(p[right]);
                s += 'R';
                right--;
            } else if (p[left] > q.back()) {
                q.push_back(p[left]);
                s += 'L';
                left++;
            } else {
                q.push_back(p[right]);
                s += 'R';
                right--;
            }
        }
    }
    
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}