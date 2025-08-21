#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)
 
int  main() {

     ll t; 
    cin >> t;
    while (t--) {
        ll n, m;
        string a, b, c;
        
        cin >> n >> a;
        cin >> m >> b;
        cin >> c;

        deque<char> dq(a.begin(), a.end());

        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                dq.push_front(b[i]);
            } else {
                dq.push_back(b[i]);  
            }
        }

        string result(dq.begin(), dq.end());
        cout << result << endl;
    }
 	
    return 0;	  	 	  	 	  	
}	