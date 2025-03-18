#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {

        if(str[i]=='H' || str[i]=='Q' || str[i]=='9'){
            count=1;

            break;
            
        }
        
    }

    if (count == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}