#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int sum = 0;
        int num;
        cin >> num;
        int temp = num;

        while (temp != 0)
        {

            sum += temp % 10;
            temp /= 10;
        }

        cout << sum << endl;
    }
}