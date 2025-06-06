#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){

        int n,a,b;
        cin>>n>>a>>b;

        int pair_count=n/2;
        int reminder=n%2;

        int cost_for_pair=min(2*a,b)*pair_count;
        int cost_for_reminder=a*reminder;
        int total_cost=cost_for_pair+cost_for_reminder;

        cout<<total_cost<<endl;
    }


}