#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;

    int m=max(a,b);
    int n=min(a,b);

    int s=m-n;
    cout<<n<<" "<<(s/2)<<endl;
}