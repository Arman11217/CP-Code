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
    sort(vec.rbegin(),vec.rend());

    vector<ll> result;
    ll l=0,r=n-1;
    ll i=0;
    while (l<=r)
    {
        
        if(i%2==0){
            result.push_back(vec[l]);
            l++;
            
        }
        else{
            result.push_back(vec[r]);
            r--;

        }
        i++;
    }
    // for(ll a:result){
    //     cout<<a<<" ";
    // }
    // cout<<endl;
    ll sum=0;
    for(ll i=1;i<n;i++){
        
            sum+=abs(result[i]-result[i-1]);
    
        
    }
    sum+=abs(result[0]-result[n-1]);
    cout<<sum<<endl;
    
  }
 	return 0;	  	 	  	 	  	
}	