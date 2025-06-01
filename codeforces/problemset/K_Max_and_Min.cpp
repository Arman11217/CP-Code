#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long a, b, c;
    cin >> a >> b >> c;

    long long m = max({a, b, c});
    long long n = min({a, b, c});

    cout<<n<<" "<<m<<endl;
}