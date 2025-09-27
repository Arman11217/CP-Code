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
  testCase{
    ll n;
    cin>>n;
    vector<ll> vec(n);
    for(ll i=0;i<n;i++){
        cin>>vec[i];
    }
    ll countZero=0,countMone=0;
    for(ll i=0;i<n;i++){
       if(vec[i]==0){
        countZero++;
       }
       else if(vec[i]==-1){
        countMone++;
       }
    }
    ll result=0;
    if(countMone%2!=0){
        result=2+countZero;
    }
    else{
        result=countZero;
    }
    cout<<result<<endl;
  }
 	return 0;	  	 	  	 	  	
}	