#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    long long n;
    while (t--)
    {
        cin>>n;

        if(n==1 || n==2){
            cout<<0<<endl;
        }
        else if(n%2==0){
            long long result=n/2;
            cout<<result-1<<endl;

        }
        else if(n%2!=0){
            long long result=n/2;
            cout<<result<<endl;

        }


    }
    
}