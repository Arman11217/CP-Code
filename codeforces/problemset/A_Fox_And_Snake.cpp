#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, m;
    cin >> n >> m;

    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        string str1(m, '#');

        if (i % 2 != 0)
        {
            cout << str1;
        }
        else
        {
            if (count == 1 && i % 2 == 0)
            {
                for (int k = 0; k < (m - 1); k++)
                {
                    str1[k] = '.';

                    count = 2;
                }
                cout << str1;
            }
            else if (count == 2 && i % 2 == 0)
            {
                for (int k = 1; k < m; k++)
                {
                    str1[k] = '.';

                    count = 1;
                }
                cout << str1;
            }
        }
        cout << endl;
    }
}
