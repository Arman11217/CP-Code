#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    char ch;
    int count=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch;

            if(ch=='C'||ch=='M'||ch=='Y')
            {
                count++;

            }
        }
    }

    if(count==0){
        cout<<"#Black&White"<<endl;
    }
    else{
        cout<<"#Color"<<endl;
    }

}