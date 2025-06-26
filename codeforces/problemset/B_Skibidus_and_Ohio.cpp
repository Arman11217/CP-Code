#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        string str;
        cin>>str;

        int result=str.length();

        for(int i=0;i<str.length()-1;i++){

            if(str[i]==str[i+1]){
                result=1;
                break;
            }
        }

        cout<<result<<endl;

    }
}