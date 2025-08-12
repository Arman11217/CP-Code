#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << " = " << x << endl;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        map <ll,ll> freq;

        for(ll &i: v) cin >> i;

        freq[v[0]]++;
        
        bool yes=true;
        for (ll i = 1; i < n; i++)
        {
            if(freq[v[i]+1] > 0 || freq[v[i]-1] > 0){
                freq[v[i]]++;
            } else {
                yes=false;
                break;
            }
        }
        cout << (yes?"YES":"NO") << endl;
    }
    


    
    
   
}