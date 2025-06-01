<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        vector<int> vec(3);
        for(int i=0;i<3;i++){
            cin>>vec[i];
        }

        sort(vec.rbegin(),vec.rend());

        if(vec[0]+vec[1]>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
=======
#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){

        vector<int> vec(3);
        for(int i=0;i<3;i++){
            cin>>vec[i];
        }

        sort(vec.rbegin(),vec.rend());

        if(vec[0]+vec[1]>=10){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
>>>>>>> 3260c6a0d89969c97582672b921aa1c7cd2c4b4d
}