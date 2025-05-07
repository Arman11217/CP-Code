#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        string str;
        cin>>str;

        //string plural=str.erase((str.length()-2),2);
        str=str.substr(0,str.length()-2);

        //cout<<(plural+'i')<<endl;

        cout<<(str+'i')<<endl;
    }
}