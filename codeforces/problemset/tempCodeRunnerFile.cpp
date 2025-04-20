#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;

    set<char> s;

    for(int i=0;i<str.size();i++){
        if(str[i]>'a' && str[i<'z']){
            s.insert(str[i]);
        }
        
    }
    cout<<s.size()<<endl;
}