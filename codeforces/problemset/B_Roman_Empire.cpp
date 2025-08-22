#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)

string toRoman(ll n) {
    vector<ll> values   = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> symbols = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};

    string result = "";
    for (int i = 0; i < values.size(); i++) {
        while (n >= values[i]) {      
            result += symbols[i];     
            n -= values[i];       
        }
    }
    return result;
}


int main() {
    fast;

    int t;
    cin>>t;
    
    while(t--) {
        int n;
        cin >> n;
        cout << toRoman(n) << endl;
    }
    
    return 0;
}