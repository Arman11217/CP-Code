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
#define ull  unsigned long long
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
        ll k;
        ull x;
        cin >> k >> x;
        
        ll v = 0;
        ull tx = x;
        while ((tx & 1ull) == 0) {
            v++;
            tx >>= 1;
        }
        ll n = k - v;
        if (n < 0) n = 0; 
        cout << n << '\n';
        if (n == 0) {
            cout << '\n';
            continue;
        }
        ull M = x >> v;
        cout << "M=" << M << " x=" << x << " v=" << v << endl;
        ull S = (M - 1ull) >> 1; 
        vector<ll> ops;
        ops.reserve(n);
        for (ll i = 0; i < n; ++i) {
            ll bit = S & 1ull;
            if (bit) ops.push_back(2); 
            else ops.push_back(1);
            S >>= 1;
        }
        for (ll i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << ops[i];
        }
        cout <<endl; 
    }
 	return 0;	  	 	  	 	  	
}	