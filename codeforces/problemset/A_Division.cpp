#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rating;
    int t;
    cin>>t;
    while(t--){
        cin >> rating;

    if (1900 <= rating)
    {
        cout << "Division 1" << endl;
    }
    else if (1600 <= rating && rating <= 1899)
    {
        cout << "Division 2" << endl;
    }

    else if (1400 <= rating && rating <= 1599)
    {
        cout << "Division 3" << endl;
    }

    else if (1399 >= rating)
    {
        cout << "Division 4" << endl;
    }
    }
}