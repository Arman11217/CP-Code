#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    int k;

    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        if (n % 10 == 0)
        {
            n = n / 10;
        }
        else
        {
            n--;
        }
    }

    cout << n << endl;
}