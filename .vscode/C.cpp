#include <bits/stdc++.h>
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr)
#define all(v) v.begin(), v.end()
#define revall(v) v.rbegin(), v.rend()
#define deb(x) cout << #x << " = " << x << '\n';
#define newl cout << endl
#define endl "\n"
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9+7;

using namespace std;

int main()
{
    fast_io;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
       
        vector <ll> items(20);
        for (ll i = 0; i < 20; i++)
        {
            cin >> items[i];
        }

        vector <pair<ll,vector<ll>>> rest(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> rest[i].first;
            for (ll j = 0; j < 20; j++)
            {
                ll in;
                cin >> in;
                rest[i].second.push_back(in);
            }
            
        }
        

        ll MXt=LLONG_MIN;
        ll x=0;
        ull Mainsum=0;
        for (ll i = 0; i < 5; i++)
        {
            ll MNs=LLONG_MAX;
            for (ll j = 0; j < n; j++)
            {
                ll sum=0;
                for (ll k = x; k < x+4; k++)
                {
                    sum+=rest[j].second[items[k]-1];
                }
                if(MNs>sum){
                    MNs=sum;
                    MXt=max(MXt,rest[j].first);
                }
            }
            x+=4;
            Mainsum+=(ull)MNs;
        }

        Mainsum+=(ull)MXt;
        cout << Mainsum << endl;
        
    }
    

    return 0;
}