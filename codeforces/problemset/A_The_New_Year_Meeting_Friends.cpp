#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m=max({a,b,c});
    int n=min({a,b,c});

    cout<<(m-n)<<endl;
}