#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    bool flag=false;

    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            flag=true;
            break;
        }

        
    }
    if(flag==false){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}