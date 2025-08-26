#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {

    fast;
    testCase {
        ll n, a, b;
        cin >> n >> a >> b;   
        if (( (n - b) % 2 == 0 ) && ( a <= b || (n - a) % 2 == 0 )) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}