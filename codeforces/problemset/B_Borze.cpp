#include<bits/stdc++.h>
using namespace std;
int main(){

    string str;
    cin>>str;

    string result="";

    for(int i=0;i<str.length();){

        if(str[i]=='.'){
            result+='0';
            i++;
        }

        else if(str[i]=='-'){
            if(str[i+1]=='.'){
                result+='1';
            }
            else if(str[i+1]=='-'){
                result+='2';
            }
            i+=2;
        }
    }
    cout<<result<<endl;
}