#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int a;
    int even=0, odd=0, positive=0, negative=0;

    while (n--)
    {
        cin >> a;

        if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            negative++;
        }

        if (a % 2 == 0)
        {
            even++;
        }
        else if (a % 2 != 0)
        {
            odd++;
        }
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}