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
 
int main() {
    fast;
    
    testCase{
        string s;
        cin >> s;
        
        int hh = stoi(s.substr(0, 2));
        int mm = stoi(s.substr(3, 2));
        
        int totalMinutes = hh * 60 + mm;
        
        if (totalMinutes <= 0) { 
            cout << "00:00"<<endl;
        } else if (totalMinutes <= 11 * 60 + 11) { 
            cout << "11:11"<<endl;
        } else if (totalMinutes <= 22 * 60 + 22) { 
            cout << "22:22"<<endl;
        } else {
            cout << "00:00"<<endl;
        }
    }
    
    return 0;
}	