#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;

    vector<int> vec(t);
    for(int i=0;i<t;i++){
        cin>>vec[i];
    }

    sort(vec.begin(),vec.end());
    
    int result=vec[n-1]-vec[0];
    for(int i=n;i<=t;i++){
        int ans=vec[i-1]-vec[i-n];
        abs(ans);
        result=min(ans,result);
    }
    cout<<result<<endl;
}