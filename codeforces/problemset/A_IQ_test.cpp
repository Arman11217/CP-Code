#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
 	ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int evenCount = 0, oddCount = 0;
    for (ll i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) 
            evenCount++;
        else 
            oddCount++;
    }

    for (ll i = 0; i < n; i++) {
        if (evenCount > oddCount && arr[i] % 2 != 0) {
            cout << i + 1 << endl;
            break;
        }
        if (oddCount > evenCount && arr[i] % 2 == 0) {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;	  	 	  	 	  	
}	