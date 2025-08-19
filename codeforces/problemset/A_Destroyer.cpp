#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
    fast;

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> l(n);
        for (int i = 0; i < n; i++) cin >> l[i];

        map<ll,ll> freq;
        for (int x : l) freq[x]++;

        

        bool ok = true;

        for (auto it : freq) {
            ll x = it.first;
            if (x == 0) continue;
            if (freq[x] > freq[x-1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;	  	 	  	 	  	
}
