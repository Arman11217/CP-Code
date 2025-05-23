#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str;
    cin >> str;

    int index;
    for(int i=0;i<str.length();i++){

        if(str[i]=='+' || str[i]=='-' ||str[i]=='*' ||str[i]=='/' ){
             index=str.find(str[i]);
             break;
        }
    }
    string s1 = str.substr(0, index);
    string s2 = str.substr(index + 1, str.length() - 1);

    int x = stoi(s1);
    int y = stoi(s2);

    if (str[index] == '+')
    {
        cout << x + y << endl;
    }
    else if (str[index] == '-')
    {
        cout << x - y << endl;
    }
    else if (str[index] == '*')
    {
        cout << x * y << endl;
    }
    else if (str[index] == '/')
    {
        cout << x / y << endl;
    }
}