#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int main() {
    ll n, m;
    cin >> n >> m;

    ll minMoves = (n + 1) / 2; 

    ll ans = -1;
    for (ll moves = minMoves; moves <= n; moves++) {
        if (moves % m == 0) { 
            ans = moves;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}