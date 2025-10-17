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
 
int solve(string s, int n, char start) {
    string target(n, '0');
    for (int i = 0; i < n; i++) {
        target[i] = (i % 2 == 0) ? start : (start == '0' ? '1' : '0');
    }
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        a[i] = s[i] - '0';
        b[i] = target[i] - '0';
    }
    
    int ops = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (i + 1 >= n) return INT_MAX;
            ops++;
            
            a[i] ^= 1;
            if (i + 1 < n) a[i + 1] ^= 1;
            if (i + 2 < n) a[i + 2] ^= 1;
        }
    }
    return ops;
}

int main() {
    fast;
    testCase {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int ans1 = solve(s, n, '0'); 
        int ans2 = solve(s, n, '1'); 
    
        int ans = min(ans1, ans2);
        if (ans == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }
    
    return 0;
}