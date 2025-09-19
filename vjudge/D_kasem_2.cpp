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
   string s, t;
    cin >> s >> t;
    ll n = s.size();
      ll diff_count = 0;
    for (ll i = 0; i < n; i++) {
         if (s[i] != t[i]) {
            diff_count++;
         }
    }
    
    if (diff_count % 2 != 0) {
        cout << "impossible" << endl;
        return 0;
    }
    string p;
    ll x = 0;
    for (ll i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            p += s[i];
        } else {
            if (x == 0) {
                p += s[i];
            } else {
                p += t[i];
            }
            x = 1 - x;
        }
    }
    cout << p << endl;
 	return 0;	  	 	  	 	  	
}	