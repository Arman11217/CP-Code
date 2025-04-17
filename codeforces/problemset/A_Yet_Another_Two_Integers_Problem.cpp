#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    long long a,b;

    while(t--){

        cin>>a>>b;

        int m=abs(a-b);

        int d=m/10;

        if(m%10==0){
            cout<<d<<endl;
        }
        else{
            cout<<(d+1)<<endl;
        }

    }
}