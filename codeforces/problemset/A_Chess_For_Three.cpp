#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
using namespace std;
void yes()
{
    cout << "YES\n";
}
void no()
{
    cout << "NO\n";
}

int main()
{
  ll t;
  cin>>t;
  while(t--){
      ll a,b,c;
    cin>>a>>b>>c;

    ll sum=a+b+c;

    if(sum%2!=0){
        cout<<-1<<endl;
    }
    else if(c<=(sum/2)){
        cout<<sum/2<<endl;
    }
    else{
        cout<<(a+b)<<endl;
    }
  }

}
