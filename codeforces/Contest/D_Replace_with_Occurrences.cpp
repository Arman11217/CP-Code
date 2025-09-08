#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
#define ll  long long
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define testCase int t;cin>>t;while(t--)

void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}
//Prime Number
bool isPrime(ll n){
    if(n<2) return false;
    else for (ll i = 2; i*i <= n; i++) if(n%i==0) return false;
    return true;
}
 
int  main() {
    fast;
   testCase{
        ll n; cin >> n;
        vector<ll> b(n);
        for (ll &x : b) {
            cin >> x;
        }

        vector<vector<ll>> pos(n + 1);
        for (ll i = 0; i < n; ++i) {
            pos[b[i]].push_back(i);
        }

        vector<ll> a(n, -1);
        int Label = 1;
        bool ok = true;

        for (ll v = 1; v <= n; ++v) {
            ll m = pos[v].size();
            if (m == 0) continue;
            if (m % v != 0) { ok = false; break; }

            for (ll i = 0; i < m; i += v) {
                for (ll j = 0; j < v; ++j) {
                    a[pos[v][i + j]] = Label;
                }
                ++Label;
            }
        }

        if (!ok) {
            cout << -1 << '\n';
        } else {
            for (ll i = 0; i < n; ++i) {
                if (i) cout << ' ';
                cout << a[i];
            }
            cout << '\n';
        }
    }
 	return 0;	  	 	  	 	  	
}	