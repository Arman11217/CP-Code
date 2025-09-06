#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
ll fact[21]; 
int  main() {
 		fast;

    fact[0] = 1;
    for (int i = 1; i <= 20; i++) {
        fact[i] = fact[i-1] * i;
    }
    testCase {
        ll n;
        cin >> n;
        cout << fact[n-1] << "\n";
    }
    return 0;  	 	  	 	  	
}	