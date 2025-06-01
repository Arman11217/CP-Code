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
        int count_zero = 0, count_one = 0;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
            {
                count_zero++;
            }
            else if (str[i] == '1')
            {
                count_one++;
            }
        }

       int result=(n-1)*(count_one) + count_zero;
       cout << result << endl;
    }
}