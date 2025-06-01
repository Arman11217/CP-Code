#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        int m=max(x,y);
        int n=min(x,y);
        int sum=0;

        for(int i=(n+1);i<m;i++){
            if(i%2!=0){
                sum+=i;
            }
        }

        cout<<sum<<endl;
    }

}