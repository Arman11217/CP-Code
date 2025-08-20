#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
 		  	 
    
    ll n;
    cin >> n;

    if (n % 2 == 1) {
        cout << -1 << '\n';
        return 0;
    }

    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << ' ' << i;
        if (i + 1 < n) cout << ' ';
    }
    cout <<endl;  
    return 0;	 	  	
}	