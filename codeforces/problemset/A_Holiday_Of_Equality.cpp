#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    vector<int> vec1(t);
    vector<int> vec2;

   
    for(int i=0;i<t;i++){
        cin>>vec1[i];
    }

    int sum=0;
    sort(vec1.begin(),vec1.end());

    for(int i=0;i<t;i++){
        
        int m=vec1[t-1]-vec1[i];
        sum+=m;
    }

    cout<<sum<<endl;

}