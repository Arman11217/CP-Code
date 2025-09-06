#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--) 
int  main() {
 		fast;
    ll N, Q, M;
    cin >> N >> Q >> M;

    vector<ll> A(N+2);
    for(int i=1; i<=N; i++){
        cin >> A[i];
    }

    vector<ll> diff(N+2, 0);

    for(int i=0; i<Q; i++){
        ll L, R, d;
        cin >> L >> R >> d;
        diff[L] += d;
        diff[R+1] -= d;
    }

    ll add = 0;
    for(int i=1; i<=N; i++){
        add += diff[i];
        A[i] += add;
    }

    vector<ll> B(N);
    for(int i=0; i<N; i++) {
        B[i] = A[i+1];
    }
    sort(B.begin(), B.end(), greater<long long>());

    for(int i=0; i<M; i++){
        int K;
        cin >> K;
        cout << B[K-1] << "\n";
    }

    return 0; 	  	 	  	
}	