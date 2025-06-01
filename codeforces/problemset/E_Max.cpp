#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long arr[n];

    long long mx=0;

    for(int i=0;i<n;i++){
        cin>>arr[i];

        mx=max(mx,arr[i]);

        
    }
    cout<<mx<<endl;

     


}