#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
int main() {
    fast;
    ll n;
    cin >> n;

    set<string> alcohol = {
        "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN",
        "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"
    };

    ll ans = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (isdigit(s[0])) {
            int age = stoi(s);
            if (age < 18) ans++;
        } else {
            if (alcohol.count(s)) ans++;
        }
    }

    cout << ans << endl;

    return 0;
}

