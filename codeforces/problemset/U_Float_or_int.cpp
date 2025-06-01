#include<bits/stdc++.h>
using namespace std;
int main(){

    float n;
    cin>>n;

    int x=n;
    //float dif=n-x;
    
    if((n-x)==0){
        cout<<"int "<<x<<endl;
    }
    else{

        cout<<"float "<<x<<" "<<(n-x)<<endl; 
    }
}