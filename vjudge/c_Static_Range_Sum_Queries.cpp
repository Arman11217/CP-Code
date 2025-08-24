#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {

    fast;
    
        ll n, q;
        cin >> n >> q;

        vector<ll> x(n + 1), prefix(n + 1, 0);

        for (ll i = 1; i <= n; i++) {
            cin >> x[i];
            prefix[i] = prefix[i - 1] + x[i];  
        }

        while (q--) {
            int a, b;
            cin >> a >> b;
            cout << prefix[b] - prefix[a - 1] << endl;
        }
    
 		  	 	  	 	  	
}	


 