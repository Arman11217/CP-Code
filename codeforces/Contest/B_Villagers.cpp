#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {

    fast;
    testCase {
        ll n; 
        cin >> n;
        vector<ll> g(n);

        for (int i = 0; i < n; i++) {
            cin >> g[i];
        }

        sort(g.begin(), g.end());
        ll ans = 0;
        int r = n - 1;
        while (r > 0) {
            ans += g[r];   
            r -= 2;
        }
        if (r == 0){
            ans += g[0];
        }

        cout << ans << endl;
    }
    return 0;

}