#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    double l;
    cin >> n >> l;
    vector<double> a(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    
    double max_gap = 0;
    for (int i = 1; i < n; ++i) {
        max_gap = max(max_gap, a[i] - a[i - 1]);
    }
 
    
    double start_gap = a[0] - 0;
    double end_gap = l - a[n - 1];
 
    double d = max({max_gap / 2.0, start_gap, end_gap});
 
    cout << fixed << setprecision(10) << d << endl;
 
    return 0;
}