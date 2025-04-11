#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    vector<int> vec = {x1, x2, x3, x4};
    sort(vec.begin(), vec.end());

    int m = max({x1, x2, x3, x4});

    int a, b, c;
    a = m - vec.at(0);
    b = m - vec.at(1);
    c = m - vec.at(2);

    cout << a << " " << b << " " << c << " " << endl;
}