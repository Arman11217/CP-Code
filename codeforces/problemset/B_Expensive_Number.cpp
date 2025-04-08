#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string c;
        cin >> c;
        int n = c.length() - 1;  
        int x = 0;

        for(size_t i = 0; i < c.length(); ++i) {
            if (c[i] == '0')
            {
                x++;
            }
            else
            {
            
                int s = c.length() - (x + 1);
                if(s < n)
                {
                    n = s;
                }
            }
        }
        cout << n << endl;
    }
    
}