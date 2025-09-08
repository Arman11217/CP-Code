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
    testCase {
        ll a, b;
        cin >> a >> b;

        if (a % 2 == 0) {
            if (b % 2 == 1) {
                cout << -1 << endl; 
            } else {
                ll sum = a * (b / 2) + 2;
                cout << sum << endl;
            }
        }
        else {
            if (b % 2 == 1) {
                ll sum = a * b + 1;
                cout << sum << endl;
            } else {
                ll tmp = b;
                int t = 0;
                while ((tmp & 1) == 0) {
                    tmp >>= 1;
                    ++t;
                }
                if (t == 1) {
                    cout << -1 << endl; 
                } else {
                    ll sum = a * (b / 2) + 2;
                    cout << sum << endl;
                }
            }
        }
    }
 	return 0;	  	 	  	 	  	
}	