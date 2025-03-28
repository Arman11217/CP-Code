#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    set<int> level;

    cin >> a;
    cin>>b;
    for (int i = 0; i < b; i++)
    {
        int x;
        cin >> x;
        level.insert(x);
    }
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        int y;
        cin >> y;
        level.insert(y);
    }

    if (level.size() == a)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}