#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> num;
        int pow=1;

        while(n>0){

            if(n%10>0){
                num.push_back((n%10)*pow);
            }
            n=n/10;
            pow=pow*10;
        }

        cout<<num.size()<<endl;
        for(auto s:num){
            cout<<s<<" ";
        }
        cout<<endl;

    }
}