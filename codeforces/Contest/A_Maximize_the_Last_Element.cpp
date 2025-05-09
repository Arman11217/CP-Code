#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++)
        {
           cin>>vec[i];
        }

        int max_value=0;

        for (int i = 0; i < n; i++)
        {
           if(i%2==0){
            max_value=max(max_value,vec[i]);
           }
        }

        cout<<max_value<<endl;


        
    }


}