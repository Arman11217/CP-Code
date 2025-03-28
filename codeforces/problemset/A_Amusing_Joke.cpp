#include<bits/stdc++.h>
using namespace std;
int main(){
    string guest,residence,pile;
    cin>>guest>>residence>>pile;
    
    string str1=guest+residence;
    sort(str1.begin(),str1.end());
    sort(pile.begin(),pile.end());
    if(str1==pile){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}