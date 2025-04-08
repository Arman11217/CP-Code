#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    getline(cin, str);

    set<char> uniqueLatter;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            uniqueLatter.insert(str[i]);
        }
    }
    cout << uniqueLatter.size() << endl;
}