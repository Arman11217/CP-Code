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
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        int flag = 1;

        for (int i = 0; i < (n - 1); i++)
        {

            if (abs(vec[i] - vec[i + 1]) == 5 || abs(vec[i] - vec[i + 1]) == 7)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}