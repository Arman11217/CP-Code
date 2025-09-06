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
// Prime checker
bool isPrime(ll n){
    if(n<2) return false;
    else for (ll i = 2; i*i <= n; i++) if(n%i==0) return false;
    return true;
}
 
int  main() {
    
    ll n,k;
    cin>>n>>k;
    vector<ll> vec;
    for(ll i=2;i<=n;i++){
        if(isPrime(i)){
            vec.push_back(i);
        }
    }
    ll count=0;
    for(ll i=0;i<=vec.size();i++){
        ll p = vec[i] + vec[i+1] + 1;
        if(p <= n && isPrime(p)) count++;
    }


    if(count>=k){
        yes();
    }
    else{
        no();
    }
 	return 0;	  	 	  	 	  	
}	