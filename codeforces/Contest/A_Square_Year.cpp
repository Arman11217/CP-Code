#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
    cin>>t;
    while(t--)
    {
        string str;
       cin>>str;
       string f,l;
       int ttl_n;
       ttl_n = stoi(str);
       int len = str.length();
       f = str.substr(0,len/2);
       l = str.substr(len/2);
       int fn,ln;
       fn = stoi(f);
       ln = stoi(l);
       int sum = (fn+ln);
       int mul = sum*sum;
       if(ttl_n == mul)
       {
           cout<<fn<<" " <<ln<<endl;

       }
       else
       {
           bool flag = false;
           for(int i=1;i<100;i++)
           {
               for(int j=1;j<100;j++)
               {
                   if(((i*j)*(i*j)) == ttl_n)
                   {
                       fn = i-1;
                       ln = j;
                      flag = true;
                       break;
                   }
                   
               }
               
           }
           if(flag)
           {
               
               cout<<fn<<" "<<ln<<endl;
           }
           else
           {
               cout<<"-1"<<endl;
           }
       }

    }
}