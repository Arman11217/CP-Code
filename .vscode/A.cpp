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
       
        vector <pair<ll,pair<ll,ll>>> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first;
        }
        

        ll mex=0;
        ll MXc=0;
        set <ll> st;
        for (ll i = 0; i < n; i++)
        {
            ll x=v[i].first;
            st.insert(x);

            // if(x==mex){
                while (st.find(mex)!=st.end())
                {
                    mex++;
                }
                
            // }
            v[i].second.first=mex;

        }
        
        mex=0;
        MXc=0;
        st.clear();
        for (ll i = n-1; i >=0; i--)
        {
            ll x=v[i].first;
            st.insert(x);

            // if(x==mex){
                while (st.find(mex)!=st.end())
                {
                    mex++;
                }
                
            // }
            v[i].second.second=mex;

        }

        ll MX=LLONG_MIN;
        for (ll i = 0; i < n-1; i++)
        {
            MX=max(MX,v[i].second.first+v[i+1].second.second);
        }
        if(n==1) MX=v[0].second.first;
        cout << MX << endl;
    }
    

    return 0;
}