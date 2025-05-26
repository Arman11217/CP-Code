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
   int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k;
        cin>>k;
        string str;
        cin>>str; 
        int zero = 0;
        int one = 0;
        zero = count(be(str),'0');
        one = count(be(str),'1');
       int x = n / 2 - k;
       if (zero < x || one < x) 
       {
         cout<<"NO"<<endl;
         continue;
      }

      if((zero - x) % 2 == 0 && (one - x) % 2 == 0) 
      {
         cout<<"YES"<<endl;
      } 
      else 
      {
         cout<<"NO"<<endl;
      }
    }
}