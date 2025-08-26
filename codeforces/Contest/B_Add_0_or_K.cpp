#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];

    ll g = a[0];
    for(ll i = 1; i < n; i++) {
        g = __gcd(g, a[i]);
    }
    
    if(g > 1) {
        for(ll i = 0; i < n; i++) {
            cout << a[i] << (i == n-1 ? "\n" : " ");
        }
        return;
    }

    for(ll p = 2; p <= 31; p++) {
        if(p > 2 && p % 2 == 0) continue;
        
        bool possible = true;
        vector<ll> result(n);
        
        for(ll i = 0; i < n; i++) {
            ll remainder = a[i] % p;
            if(remainder == 0) {
                result[i] = a[i]; 
            } else {
                ll need = p - remainder; 
                if(need % k == 0) {
                    ll operations_needed = need / k;
                    if(operations_needed <= k) {
                        result[i] = a[i] + need;
                    } else {
                        possible = false;
                        break;
                    }
                } else {
                    possible = false;
                    break;
                }
            }
        }
        
        if(possible) {
            for(ll i = 0; i < n; i++) {
                cout << result[i] << (i == n-1 ? "\n" : " ");
            }
            return;
        }
    }

    for(ll i = 0; i < n; i++) {
        cout << (a[i] + k) << (i == n-1 ? "\n" : " ");
    }
}

int main() {
    fast;
    testCase{
        solve();
    }
    return 0;
}