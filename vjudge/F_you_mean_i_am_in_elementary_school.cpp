#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
ll countOperations(ll a,ll b) {
    long long ops = 0;
    while (a > 0 && b > 0) {
        if (a >= b) {
            ops += a / b;
            a = a % b;
        } else {
            ops += b / a;
            b = b % a;
        }
    }
    return ops;
}

int main() {
    fast;

    testCase {
        ll a, b;
        cin >> a >> b;
        cout << countOperations(a, b) << endl;
    }
    return 0;
}

