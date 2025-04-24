#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a;
    cin>>n>>a;

    int count=1;
    int b=n;
    while(1){
        
        if(b%10==a|| b%10==0){
            break;
        }
        count++;
        b=n*count;
    }
    cout<<(count)<<endl;
}