#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--) 
int  main() {
    fast;
    testCase{
        ll N, M;
        cin >> N >> M;
        vector<ll> rowMask(N, 0);

        for(int i=0; i<N; i++){
            ll mask = 0;
            for(int j=0; j<M; j++){
                ll x;
                cin >> x;
                mask |= x;
            }
            rowMask[i] = mask;
        }

        ll ansMask = rowMask[0];
        for(int i=1; i<N; i++){
            ansMask &= rowMask[i];
        }

        if(ansMask > 0){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }		

    return 0; 	  	 	  	
}	