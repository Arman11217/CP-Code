#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, k, l, c, d, p, nl, np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int t1=drink/nl;
    int limes=c*d;
    int t2=limes/1;
    int salt=p;
    int t3=salt/np;
    int result=min(t1,min(t2,t3));
    cout<<(result/n)<<endl;


}