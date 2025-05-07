#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        int x,y,a;
        cin>>x>>y>>a;
        
        float f=(float)a +0.5;
        float sum=0;
        int count=1;

        while(sum<=f){

            if(count%2!=0){
                sum=sum+x;
                count++;
            }
            else if(count%2==0){
                sum=sum+y;
                count++;
            }


        }

        if(count%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}