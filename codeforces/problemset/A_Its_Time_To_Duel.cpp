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

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int one = count(a.begin(), a.end(), 1);
        int zero = count(a.begin(), a.end(), 0);

        if (one == n || zero == n)
        {

            cout << "YES" << endl;
        }
        // else if (one > n - 1)
        // {
        //     cout << "YES" << endl;
        // }
        else
        {
            bool f = false;
            for (int i = 0; i < n - 1; i++)
            {

                if (a[i] ==0 && a[i + 1] == 0)
                {
                    f = true;
                    break;
                }
            }
            if (f == false)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}
