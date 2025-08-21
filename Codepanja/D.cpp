#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
ll power2(int n) {
    ll res = 1;
    while (n--) res *= 2;
    return res;
}
int  main() {
 	
    fast;
    testCase {
        ll d, X;
        cin >> d >> X;
        bool found = false;
        for (int m = 0; m <= d + 1; ++m) {
            if (m == 0) {
                if (X == 0) {
                    cout << "YES 0\n";
                    found = true;
                    break;
                }
                continue;
            }
            ll min_jump = power2(d - m + 1);
            ll max_sum = power2(d + 1) - power2(d - m + 1);
            
            if (abs(X) > max_sum) continue;
            if ((X % min_jump + min_jump) % min_jump == 0) {
                cout << "YES " << m << "\n";
                found = true;
                break;
            }
        }
        if (!found) cout << "NO\n";
    }
}	






