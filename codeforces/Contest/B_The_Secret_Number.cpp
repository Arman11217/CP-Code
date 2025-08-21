#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {

    fast;
    testCase{
        ll n;
        cin >> n;
        set<ll> xs;
        int d = to_string(n).length();
        for (int k = 1; k <= d; k++) {
            ll r = 1;
            for (int i = 0; i < k; i++) 
            {
            r *= 10;
            }

            r += 1;
            if (r > n) 
            {
                break;
            }
            if (n % r == 0) {
                ll x = n / r;
                xs.insert(x);
            }
        }
        if (xs.empty()) {
            cout << "0"<<endl;
        } else {
            cout << xs.size() << endl;
            bool first = true;
            for (ll x : xs) {
                if (!first) 
                {
                    cout << " ";
                }
                first = false;
                cout << x;
            }
            cout << endl;
        }
    }
    return 0;
    }
    	  	 	  	 	  	