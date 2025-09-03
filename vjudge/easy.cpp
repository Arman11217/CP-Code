#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
string addBigNumbers(const string &a, const string &b) {
    ll i = a.size() - 1;
    ll j = b.size() - 1;
    ll carry = 0;
    string result;
    result.reserve(max(a.size(), b.size()) + 1);

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result.push_back((sum % 10) + '0');
        carry = sum / 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    fast;

    string A, B;
    cin >> A >> B;
    cout << addBigNumbers(A, B) << "\n";
    return 0;
}
