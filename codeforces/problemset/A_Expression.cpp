#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    //int p=min({a+b,b+c,a+c});

    int m=max({(a+b)*c,(b+c)*a,(a*b*c),(a+b+c)});

    cout<<m<<endl;
}