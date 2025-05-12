#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;

    if (x <= 'z' && x >= 'a')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (x <= 'Z' && x >= 'A')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }

    else if (x <= '9' && x >= '0')
    {
        cout << "IS DIGIT" << endl;
    }
}