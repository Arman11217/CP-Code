#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
 	fast;
    ll n;
    cin >> n;
    vector<ll> prices(n);
 
    for (ll i = 0; i < n; i++) {
        cin >> prices[i];
    }
 
    sort(prices.begin(), prices.end());
 
    ll q;
    cin >> q;
    while (q--) {
        ll mi;
        cin >> mi;
 
        int count = upper_bound(prices.begin(), prices.end(), mi) - prices.begin();
        cout << count << "\n";
    }
 
    return 0;	  	 	  	 	  	
}	