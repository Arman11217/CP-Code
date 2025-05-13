#include <bits/stdc++.h>
#define ll long long
#define be(x) x.begin(), x.end()
#define rbe(x) x.rbegin(), x.rend()
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define ft front
#define bk back
using namespace std;
void yes()
{
  cout<<"YES"<<endl;
}
void no()
{
  cout<<"NO"<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        vector<int>temp(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            temp[i]=v[i];
        }   
        
        bool flag = true;
        for(int i=0;i<n-1;i++)
        {
            if(v[i]-v[i+1]== 1 )
            {
                swap(v[i],v[i+1]);
            }
        }
           
        sort(be(temp));
        for(int i=0;i<n;i++)
        {  
           if(v[i] != temp[i]) 
           {
              flag = false;
              break;
           }
           
        }
        if(flag)
        {
            yes();
        }
        else
        {
            no();
        }
    }

}