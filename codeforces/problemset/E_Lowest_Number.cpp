#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int m = *min_element(vec.begin(), vec.end());

    // int pos = min_element(vec.begin(), vec.end()) - vec.begin() + 1;

    int pos=0;

    for (int i = 0; i < n; i++)
    {
        if(vec[i]==m){
            pos=i+1;
            break;
        }
        
    }
    cout << m << " " << pos << endl;
}