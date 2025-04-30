#include<bits/stdc++.h>
using namespace std; 
int main(){

    string str;
    int t;
    cin>>t;

    string test="codeforces";

    while(t--){

        cin>>str;
        int count=0;

        for(int i=0;i<str.length();i++){
            if(str[i]!=test[i]){
                count++;
            }
        }

        cout<<count<<endl;


    }
}