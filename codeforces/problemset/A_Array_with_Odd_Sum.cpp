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
        int odd=0,even=0;

        for(int i=0;i<n;i++){
            if(vec[i]%2==0){
                even++;
            }
            else if(vec[i]%2!=0){
                odd++;

            }
        }

        if(even>=1 && odd >=1){
            cout<<"YES"<<endl;
        }
        else if(even==n){
            cout<<"NO"<<endl;
        }
        else if(odd==n){
            if(n%2!=0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}