#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int arr[] = {4, 7, 47, 74, 444, 447, 474, 744, 774, 747, 477, 777};

    int count = 0;

    for (int i = 0; i < 12; i++)
    {
        {
            if (num % arr[i] == 0)
            {
                count = 1;
            }
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