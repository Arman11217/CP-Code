#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0,sum=0,sum1=0;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    int minsum=sum/2;
    sort(vec.rbegin(),vec.rend());
    for(auto v:vec){
         sum1=sum1+v;
        count++;
        if(sum1>minsum){
            break;
        }
        
    }
    cout<<count<<endl;

}