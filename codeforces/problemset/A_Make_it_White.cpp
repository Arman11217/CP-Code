#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;
        string str;

        cin >> str;

        int frontB = 0, backB = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B')
            {

                frontB = i;
                break;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (str[i] == 'B')
            {

                backB = i;
                break;
            }
        }

        cout << ((backB - frontB) + 1) << "/n";
    }
}