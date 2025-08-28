#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)

bool dreamtrue(ll x, ll y) {
    ll mx = max(x, y);
    ll mn = min(x, y);
    return mx <= 2 * (mn + 1);
}
int main() {
    fast;
    testCase{
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        bool ok1 = dreamtrue(a, b);              
        bool ok2 = dreamtrue(c - a, d - b); 

        if (ok1 && ok2) cout << "YES" <<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}