#include<bits/stdc++.h>
using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int a,b;
    cin>>a>>b;
    int m=max(a,b);

    int result=(6-m+1);

    if(6%result==0){
        cout<<(result/result)<<"/"<<(6/result)<<endl;
    }
    else if(result%2==0){
        cout<<(result/2)<<"/"<<(6/2)<<endl;
    }
    else{
        cout<<result<<"/"<<6<<endl;
    }


}