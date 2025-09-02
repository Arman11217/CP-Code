#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
    fast;
    ll n;
    cin>>n;
    string str1,str2;
    cin>>str1>>str2;

    ll result=0;

    for(int i=0;i<n;i++){
        ll a= str1[i]-'0';
        ll b= str2[i]-'0';

       ll diff=abs(a-b);
       ll move=min(diff,10-diff);

       result+=move;

    }
    cout<<result<<endl;

    return 0;	  	 	  	 	  	
}
