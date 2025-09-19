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
    ll a,b;
    cin>>a>>b;
    vector<ll> vec;
    vec.push_back(b);

    while (b>a)
    {
        if(b%2==0){
            b/=2;
        }
        else if((b-1)%10==0){
            b/=10;
        }
        else{
            break;
        }
        vec.push_back(b);
    }
   //revall(vec);
    if (b == a) {
        cout << "YES"<<endl;
        cout << vec.size() <<endl;
        reverse(vec.begin(), vec.end());
        for (ll x : vec) {
            cout << x << " ";
        }
        cout << endl;
    } else {
        cout << "NO"<<endl;
    }
    
 	return 0;	  	 	  	 	  	
}	