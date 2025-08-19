#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {
 	fast;
    testCase{
        vector<ll> vec(3);
        for(int i=0;i<3;i++){
            cin>>vec[i];
        }
        ll result=INT_MAX;

        for(int i=0;i<3;i++){
            ll add=abs(vec[0]-vec[i])+abs(vec[1]-vec[i])+abs(vec[2]-vec[i]);
            result=min(result,add);
        }
        cout<<result<<endl;
    }
 
    return 0;	  	 	  	 	  	
}	