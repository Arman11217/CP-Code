#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    bool b=false;

    for(int i=1;i<=n;i++){
       if(i%2==0){
         cout<<i<<endl;
         b=true;
       }
       
    }
    if(b==false){
        cout<<-1<<endl;
    }
}