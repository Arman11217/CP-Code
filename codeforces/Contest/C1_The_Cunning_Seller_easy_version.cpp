#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)

ll countCost(int x) {
    return (pow(3,x+1)+(x*pow(3,x-1)));
}

int main() {
    fast;
    
    testCase {
        ll n;
        cin >> n;
        vector<int> base3;
        if (n == 0) base3.push_back(0);
        ll temp = n;
        while (temp > 0) {
            base3.push_back((int)(temp % 3));
            temp /= 3;
        }

        ll totalCost = 0;
        for (int i = 0; i < (int)base3.size(); ++i) {
            totalCost += (ll)base3[i] * countCost(i);
        }

        cout << totalCost <<endl;
    }
    
    return 0;
}
//