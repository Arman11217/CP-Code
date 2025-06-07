#include <bits/stdc++.h>
using namespace std;
int main()
{

    char ch;
    cin >> ch;
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < vec[i]; j++)
            {
                cout << ch;
            }
            cout<<endl;
        }
    
}