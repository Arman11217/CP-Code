#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int common;

        if(vec[0]==vec[1]){
            common=vec[0];
        }
        else if(vec[0]==vec[2]){
            common=vec[0];
        }
        else{
            common=vec[1];
        }

        for(int i=0;i<n;i++){
           if(vec[i]!=common){
            cout<<(i+1)<<endl;
           }
        }


    }



}
