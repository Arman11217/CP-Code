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
 

bool isVowel(char c) {
    return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
}

int countVowels(string line) {
    int cnt = 0;
    for(char c : line) {
        if(isVowel(c)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    string line[3];

    
    for(int i = 0; i < 3; i++) {
        getline(cin, line[i]);
    }

   
    vector<ll> vec;
    for(int i = 0; i < 3; i++) {
      vec.push_back(countVowels(line[i]));
    }

   
    if(vec[0] == 5 && vec[1] == 7 && vec[2] == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}