#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--) 

const int MAXA = 200000;
vector<int> primes;
bool isPrime[MAXA + 1];

void sieve() {
    for(int i = 0; i <= MAXA; i++)
        isPrime[i] = true; 

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= MAXA; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
            if((long long)i * i <= MAXA) {
                for(long long j = (long long)i * i; j <= MAXA; j += i)
                    isPrime[j] = false;
            }
        }
    }
}
int  main() {
    fast;

    sieve();

    testCase{
        int N;
        cin >> N;
        vector<int> A(N);
        for(int i = 0; i < N; i++) cin >> A[i];

        int ans = -1;

        for(int p : primes) {
            int length = 0, maxLength = 0;
            for(int i = 0; i < N; i++) {
                if(A[i] % p == 0) length++;
                else length = 0;
                if(length > maxLength) maxLength = length;
            }
            if(maxLength > 0 && maxLength > ans) ans = maxLength;
        }

        cout << ans << "\n";
    }

    return 0; 	  	 	  	
}	 