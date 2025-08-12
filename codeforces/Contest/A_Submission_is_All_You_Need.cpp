#include <bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<vec.size();i++){
            cin>>vec[i];
        }

        int sum=0;

        for(int i=0;i<vec.size();i++){
            
            if(vec[i]==0){
                sum+=1;
            }
            else{
                sum+=vec[i];
            }
        }
        cout<<sum<<endl;

    }
}

