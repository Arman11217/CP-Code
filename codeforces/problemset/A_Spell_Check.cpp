#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string spelling ="Timur";

        string str;
        cin>>str;

        sort(spelling.begin(),spelling.end());
        sort(str.begin(),str.end());


        if(str==spelling){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}