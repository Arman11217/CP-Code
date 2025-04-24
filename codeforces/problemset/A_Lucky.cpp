#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string str;
    int sum1=0,sum2=0;
    int n;
    while (t--)
    {
        cin>>str;
        
        sum1=str[0]+str[1]+str[2];
        sum2=str[3]+str[4]+str[5];
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        
    }
    
    
}