#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define endl '\n'
#define ll  long long
#define testCase int t;cin>>t;while(t--)

int main() {
    fast;
    testCase{
         ll n,k;
        cin >> n >> k;
        string str;
        cin >> str;

        vector<ll> vec(n);

        ll count=0;
        bool result=true;
        ll MAX=n;
        ll MIN=1;

        for (ll i = 0; i <n; i++)
        {
            if(str[i]=='0'){
                vec[i]=MAX;
                MAX--;
                count=0;
            }
            else{
                count++;
                vec[i]=MIN;
                MIN++;
            }
            
            if(count>=k){
                result=false;
                break;
            }
        }
        
        if(result){
            cout << "YES" << endl;
            for (ll i = 0; i < n; i++)
            {
                cout << vec[i] << " ";
            }
            cout<<endl;
            
        } else {
            cout << "NO" << endl;
        }
    }

        
    return 0;
}