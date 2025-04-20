#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    int countm=0,countc=0;

    while(n--){
        int m,c;
        cin>>m>>c;

        if(m>c){
            countm++;
        }
        else if(m<c){
            countc++;
        }

    }

    if(countm>countc){
        cout<<"Mishka"<<endl;
    }
    else if(countm<countc){
        cout<<"Chris"<<endl;
    }
    else if(countm==countc){
        cout<<"Friendship is magic!^^"<<endl;
    }
}