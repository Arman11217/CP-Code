#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;

    long long x,y,z;

    vector<long long> vec={a,b,c};
    sort(vec.begin(),vec.end());
    x=vec[0];
    y=vec[1];
    z=vec[2];

    cout<<x<<"\n"<<y<<"\n"<<z<<"\n"<<endl;
    cout<<a<<"\n"<<b<<"\n"<<c<<endl;



}