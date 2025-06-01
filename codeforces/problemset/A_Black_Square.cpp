#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec(4);

    for(int i=0;i<4;i++){
        cin>>vec[i];
    }

    string str;
    cin>>str;
    int result=0;

    for(int i=0;i<str.length();i++){

        if(str[i]=='1'){
            result+=vec[0];
        }
        
        else if(str[i]=='2'){
            result+=vec[1];
        }
        
        else if(str[i]=='3'){
            result+=vec[2];
        }
        
        else if(str[i]=='4'){
            result+=vec[3];
        }
    }

    cout<<result<<endl;


}