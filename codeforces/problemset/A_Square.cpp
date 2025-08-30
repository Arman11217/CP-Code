#include <bits/stdc++.h>
using namespace std;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define endl '\n'
#define ll long long
#define testCase \
    int t;       \
    cin >> t;    \
    while (t--)

int main()
{
    fast;
    testCase
    {
        vector<ll> x(4), y(4);

        for (int i = 0; i < 4; i++)
        {
            cin >> x[i] >> y[1];
        }

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

       ll side = 0;
        if (x[0] != x[3]) {
            side = x[3] - x[0];  
        } else {
            side = y[3] - y[0];
        }

        cout<<side*side<<endl;
    }
    return 0;
}
