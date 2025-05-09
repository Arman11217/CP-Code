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
        int countZero=0;

        for(int i=0;i<(n-1);i++){
            if(vec[i]==0 && vec[i+1]==0){
                countZero++;
            }
            // else{
            //     countZero=0;
            // }
        }

        cout<<countZero<<endl;
    }
}
